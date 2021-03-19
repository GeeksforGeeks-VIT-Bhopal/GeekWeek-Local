/*
 * Chef Protection Plan
 * Lexical analysis, Predictive parsing [LL(1)], regex
 */
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <regex.h>
#include <ctype.h>

using namespace std;

const int N = 12;
const int NL = 2;
const long long MID = 2000LL;

enum Token
{
    _lpar, _rpar, _d, _l, _string, _num, _to, _or, _times, _digit, _digits,
    _letter, _letters, _upto, _exactly, _optional, _eos
};

enum State
{
    __default, __keyword, __letter, __string, __num, __digit, __paren
};

/*
 * DFA
 */
class Tokenizer
{
    string s;
    int ifront, irear;
    vector<Token> tokenStream;
    vector<string> lexemeStream;
public:
    void init(string _s)
    {
        s = _s;
        ifront = 0;
        tokenStream.clear();
        lexemeStream.clear();
    }
    Token getToken(int n)
    {
        return tokenStream[n];
    }
    bool tokenize();
    string getString(int n)
    {
        return lexemeStream[n];
    }
};

bool Tokenizer::tokenize()
{
    State state;
    bool accept;
    while (ifront < s.length()) {
        state = __default;
        accept = false;
        irear = ifront;
        do {
            switch (state) {
            case __default:
                if (islower(s[ifront])) {
                    state = __keyword;
                } else if (isupper(s[ifront])) {
                    state = __letter;
                } else if (isdigit(s[ifront])) {
                    state = __digit;
                } else if (s[ifront] == '(' || s[ifront] == ')') {
                    state = __paren;
                    accept = true;
                } else if (s[ifront] == '-') {
                    state = __string;
                } else {
                    irear++;
                }
                ifront++;
                break;
            case __string:
                if (s[ifront] == ' ' || s[ifront] == '(' || s[ifront] == ')') {
                    accept = true;
                } else if (islower(s[ifront])) {
                    return false;
                } else {
                    ifront++;
                }
                break;
            case __keyword:
                if (s[ifront] == ' ' || s[ifront] == '(' || s[ifront] == ')') {
                    accept = true;
                } else if (islower(s[ifront])) {
                    ifront++;
                } else {
                    return false;
                }
                break;
            case __digit:
                if (isdigit(s[ifront])) {
                    state = __num;
                    ifront++;
                    break;
                }
            case __letter:
                if (s[ifront] == ' ' || s[ifront] == '(' || s[ifront] == ')') {
                    accept = true;
                } else if (islower(s[ifront])) {
                    return false;
                } else {
                    state = __string;
                    ifront++;
                }
                break;
            case __num:
                if (s[ifront] == ' ' || s[ifront] == '(' || s[ifront] == ')') {
                    accept = true;
                } else if (islower(s[ifront])) {
                    return false;
                } else if (isupper(s[ifront])) {
                    state = __string;
                    ifront++;
                } else {
                    ifront++;
                }
                break;
            };
        }while (!accept && ifront < s.length());

        string lexeme = s.substr(irear, ifront - irear);
        Token token;
        switch (state) {
        case __default: token = _eos;
            break;
        case __keyword: if (lexeme == "to") token = _to;
                        else if (lexeme == "or") token = _or;
                        else if (lexeme == "times") token = _times;
                        else if (lexeme == "digit") token = _digit;
                        else if (lexeme == "digits") token = _digits;
                        else if (lexeme == "letter") token = _letter;
                        else if (lexeme == "letters") token = _letters;
                        else if (lexeme == "upto") token = _upto;
                        else if (lexeme == "exactly") token = _exactly;
                        else if (lexeme == "optional") token = _optional;
            break;
        case __digit: token = _d;
            break;
        case __letter: token = _l;
            break;
        case __string: token = _string;
            break;
        case __num: token = _num;
            break;
        case __paren: if (lexeme == "(") token = _lpar;
                      else token = _rpar;
            break;
        }
        tokenStream.push_back(token);
        lexemeStream.push_back(lexeme);
    }
    tokenStream.push_back(_eos);
    return true;
}

struct pret //parser output
{
    long long idlen;
    bool correct;
    pret() : idlen(0), correct(false)
    {}
    pret(long long _idlen, bool _correct) : idlen(_idlen), correct(_correct)
    {}
};

class Parser;

typedef pret (Parser::*nonTerminal)();

class Parser
{
    string regex;
    Tokenizer *tokenizer;
    int index;
    long long idlen;
    bool NExceeded;
    bool idLenExceeded;

    Token getToken(int n)
    {
        return tokenizer->getToken(n);
    }
    string getString(int n)
    {
        return tokenizer->getString(n);
    }
    /*
     * NON-TERMINALS
     * return true on success, false on error
     */
    pret S();       //START         : E S_
    pret S_();      //S factored    : E S_ | e
    pret E();       //EXPR          : T E_
    pret E_();      //E factored    : or E | e
    pret T();       //TERM          : F T_
    pret T_();      //T factored    : num T__ | d T__ | optional T_ | e
    pret T__();     //T_ factored   : times T_ | e
    pret F();       //FACTOR        : d F1 | l F2 | upto num F3 | upto d F3 |
                    //                exactly num F4 | exactly d F4 | digit | letter |
                    //                string | num | ( S )
    pret F1();      //F factored    : to d | e
    pret F2();      //F factored    : to l | e
    pret F3();      //F factored    : digits | letters
    pret F4();      //F factored    : digits | letters

    pret JOIN(nonTerminal f1, nonTerminal f2)
    {
        pret p1 = (this->*f1)(), p2;
        if (p1.correct) {
            p2 = (this->*f2)();
            return pret(p1.idlen + p2.idlen, p2.correct);
        }
        return pret();
    }
    pret CHOOSEMAX(nonTerminal f1, nonTerminal f2)
    {
        pret p1 = (this->*f1)(), p2;
        if (p1.correct) {
            p2 = (this->*f2)();
            return pret(std::max(p1.idlen, p2.idlen), p2.correct);
        }
        return pret();
    }

public:
    void init(Tokenizer *_tokenizer)
    {
        tokenizer = _tokenizer;
        idLenExceeded = false;
        NExceeded = false;
    }
    string getRegex()
    {
        return regex;
    }
    bool isIDLenExceeded()
    {
        return (idLenExceeded || idlen > MID);
    }
    bool isNExceeded()
    {
        return NExceeded;
    }
    bool parse();
};

bool Parser::parse()
{
    index = 0;
    regex = "^";
    pret r = S();
    bool done = r.correct && (getToken(index) == _eos);
    regex.append("$");
    idlen = r.idlen;
    return done;
}

pret Parser::S()
{
    Token tok = getToken(index);
    if (tok == _lpar || tok == _d || tok == _l || tok == _digit || tok == _letter
            || tok == _string || tok == _num || tok == _upto || tok == _exactly)
    {
        return JOIN(&Parser::E, &Parser::S_);
    }
    return pret();
}

pret Parser::S_()
{
    Token tok = getToken(index);
    if (tok == _lpar || tok == _d || tok == _l || tok == _digit || tok == _letter
            || tok == _string || tok == _num || tok == _upto || tok == _exactly)
    {
        return JOIN(&Parser::E, &Parser::S_);
    }
    return pret(0, tok == _rpar || tok == _eos);
}

pret Parser::E()
{
    Token tok = getToken(index);
    if (tok == _lpar || tok == _d || tok == _l || tok == _digit || tok == _letter
            || tok == _string || tok == _num || tok == _upto || tok == _exactly)
    {
        regex.append("(");
        pret ret = CHOOSEMAX(&Parser::T, &Parser::E_);
        regex.append(")");
        return ret;
    }
    return pret();
}

pret Parser::E_()
{
    Token tok = getToken(index);
    if (tok == _lpar || tok == _d || tok == _l || tok == _digit || tok == _letter
            || tok == _string || tok == _num || tok == _upto || tok == _exactly
            || tok == _rpar || tok == _eos)
    {
        return pret(0, true);
    }
    if (tok == _or)
    {
        regex.append("|");
        index++;
        return E();
    }
    return pret();
}

pret Parser::T()
{
    Token tok = getToken(index);
    if (tok == _lpar || tok == _d || tok == _l || tok == _digit || tok == _letter
            || tok == _string || tok == _num || tok == _upto || tok == _exactly)
    {
        string saveRegex = regex;
        regex = "(";
        pret r1 = F(), r2;
        regex.append(")");

        if (r1.correct)
            r2 = T_();

        int lparc = 0;
        for (int i = 0; i < regex.length(); i++)
            if (regex[i] == '(')
                lparc++;
            else if (regex[i] == ')')
            {
                if (lparc)
                    lparc--;
                else
                    saveRegex.append("(");
            }
        regex = saveRegex + regex;
        if (r1.idlen * r2.idlen > MID)
            idLenExceeded = true;
        return pret(r1.idlen * r2.idlen, r2.correct);
    }
    return pret();
}

pret Parser::T_()
{
    Token tok = getToken(index);
    if (tok == _lpar || tok == _l || tok == _digit || tok == _letter
            || tok == _string || tok == _upto || tok == _exactly
            || tok == _rpar || tok == _eos || tok == _or)
    {
        return pret(1, true); //1 Because of multiplication
    }
    if (tok == _optional)
    {
        regex.append(")");
        regex.append("?");
        index++;
        return T_();
    }
    if (tok == _num || tok == _d)
    {
        index++;
        return T__();
    }
    return pret();
}

pret Parser::T__()
{
    Token tok = getToken(index);
    if (tok == _lpar || tok == _d || tok == _l || tok == _digit || tok == _letter
            || tok == _string || tok == _num || tok == _upto || tok == _exactly
            || tok == _rpar || tok == _eos || tok == _or
            || tok == _optional || tok == _to)
    {
        index--;
        return pret(1, true);
    }
    if (tok == _times)
    {
        string s = getString(index-1);
        long long n = 0;
        for (int i = 0; i < s.length(); i++)
            n = n*10 + s[i] - '0';
        if (n > N || s.length() > NL || s[0] == '0')
        {
            NExceeded = true;
            return pret();
        }
        regex.append(")");
        regex.append("{" + s + "}");
        index++;
        pret r = T_();
        if (n * r.idlen > MID)
            idLenExceeded = true;
        return pret(n * r.idlen, r.correct);
    }
    return pret();
}

pret Parser::F()
{
    Token tok = getToken(index);
    pret ret;
    switch (tok)
    {
    case _lpar:
        regex.append("(");
        index++;
        ret = S();
        ret.correct = ret.correct && (getToken(index++) == _rpar);
        regex.append(")");
        return ret;
    case _d:
        index++;
        return F1();
    case _l:
        index++;
        return F2();
    case _num:
    case _string:
        regex.append(getString(index));
        return pret(getString(index++).length(), true);
    case _digit:
        regex.append("[0-9]");
        index++;
        return pret(1, true);
    case _letter:
        regex.append("[A-Z]");
        index++;
        return pret(1, true);
    case _upto:
        index++;
        tok = getToken(index++);
        if (tok == _num || tok == _d)
            return F3();
        break;
    case _exactly:
        index++;
        tok = getToken(index++);
        if (tok == _num || tok == _d)
            return F4();
        break;
    }
    return pret();
}

pret Parser::F1()
{
    Token tok = getToken(index);
    if (tok == _lpar || tok == _d || tok == _l || tok == _digit || tok == _letter
            || tok == _string || tok == _num || tok == _upto || tok == _exactly
            || tok == _rpar || tok == _eos || tok == _or || tok == _optional)
    {
        regex.append(getString(index-1));
        return pret(1, true);
    }
    string a, b;
    if (tok == _to && getToken(++index) == _d && (a = getString(index-2)) <= (b = getString(index)))
    {
        regex.append("[" + a + "-" + b + "]");
        index++;
        return pret(1, true);
    }
    return pret();
}

pret Parser::F2()
{
    Token tok = getToken(index);
    if (tok == _lpar || tok == _d || tok == _l || tok == _digit || tok == _letter
            || tok == _string || tok == _num || tok == _upto || tok == _exactly
            || tok == _rpar || tok == _eos || tok == _or || tok == _optional)
    {
        regex.append(getString(index-1));
        return pret(1, true);
    }
    string a, b;
    if (tok == _to && getToken(++index) == _l && (a = getString(index-2)) <= (b = getString(index)))
    {
        regex.append("[" + a + "-" + b + "]");
        index++;
        return pret(1, true);
    }
    return pret();
}

pret Parser::F3()
{
    Token tok = getToken(index);

    string s = getString(index-1);
    int n = 0;
    for (int i = 0; i < s.length(); i++)
        n = n*10 + s[i] - '0';
    if (n > N || s.length() > NL || s[0] == '0')
    {
        NExceeded = true;
        return pret();
    }

    if (tok == _digits)
    {
        regex.append("[0-9]{," + s + "}");
        index++;
        return pret(n, true);
    }
    if (tok == _letters)
    {
        regex.append("[A-Z]{," + s + "}");
        index++;
        return pret(n, true);
    }
    return pret();
}

pret Parser::F4()
{
    Token tok = getToken(index);

    string s = getString(index-1);
    int n = 0;
    for (int i = 0; i < s.length(); i++)
        n = n*10 + s[i] - '0';
    if (n > N || s.length() > NL || s[0] == '0')
    {
        NExceeded = true;
        return pret();
    }

    if (tok == _digits)
    {
        regex.append("[0-9]{" + s + "}");
        index++;
        return pret(n, true);
    }
    if (tok == _letters)
    {
        regex.append("[A-Z]{" + s + "}");
        index++;
        return pret(n, true);
    }
    return pret();
}

void skiplines(int n)
{
    string s;
    while (n--) {
        do {
            getline(cin, s);
        }while (s == "");
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t, n;
    Tokenizer tokenizer;
    string expr, regex, s;
    Parser parser;
    regex_t reg;

    cin >> t;
    while (t--) {
        do {
            getline(cin, expr);
        }while (expr == "");
        cin >> n;

        tokenizer.init(expr);
        if (!tokenizer.tokenize()) {
            cout << "Format does not conform\n\n";
            skiplines(n);
            continue;
        }
        parser.init(&tokenizer);
        if (parser.parse() && !parser.isIDLenExceeded()) {
            regex = parser.getRegex();
            regcomp(&reg, regex.c_str(), REG_EXTENDED);
        } else {
            if (parser.isIDLenExceeded() && !parser.isNExceeded())
                cout << "Matches too long ID\n\n";
            else
                cout << "Format does not conform\n\n";
            skiplines(n);
            continue;
        }
        while (n--) {
            cin >> s;
            if (regexec(&reg, s.c_str(), (size_t)0, NULL, 0) == 0)
                cout << "Valid-ID\n";
            else
                cout << "Invalid-ID\n";
        }
        cout << '\n';
        regfree(&reg);
    }
    return 0;
}
