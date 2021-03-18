class Solution {
public:
    string intToRoman(int num) {
        string result = "";
        
        int numerals[7] =      { 1,    5,   10,    50,     100,    500,    1000 };
        char numerals_key[7] = { 'I', 'V',  'X',   'L',    'C',    'D',    'M'};
        
        int remainders[6] =      { 4,    9,     40,     90,      400,     900 };
        char* remainders_key[6] = { "IV", "IX",  "XL",   "XC",    "CD",    "CM"};

        while(num != 0)
        {
            int quotient = int(pow(10, (to_string(num).length() - 1)));
            //cout << num << " / " << quotient << endl;

            int nnum = num / quotient;
            //cout << quotient << " goes into " << num << " " << nnum << " times" << endl;

            num = num % int(pow(10, (to_string(num).length() - 1)));
            //cout << "Remainder: " << num << endl;
            
            int numeral = quotient * nnum;
            //cout << "Numeral: " << numeral << endl;
        
            if(numeral < 4)
            {
                while(numeral > 0)
                {
                    result += 'I';
                    numeral--;
                }
            }
            else
            {
                bool found = false;
                for(int i = 0; i<6;i++)
                {
                    if(numeral == remainders[i])
                    {
                        result += remainders_key[i];
                        found = true;
                    }
                }
                for(int i = 0; i<7;i++)
                {
                    if(numeral == numerals[i])
                    {
                        result += numerals_key[i];
                        found = true;
                    }
                }
                if(!found)
                {
                    //cout << "Not found" << endl;
                    
                    for(int i=6; i>=0;i--)
                    {
                        //cout << numeral << " > " << numerals[i] << endl;
                        if(numeral > numerals[i])
                        {
                            //cout << "YES" << endl;
                            result += numerals_key[i];
                            numeral -= numerals[i];
                            num += numeral;
                            break;
                        }
                    }
                }
            }
        }
        return result;
    }
};