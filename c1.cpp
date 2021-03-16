string printCharactersAtPrimeIndices(string str, int N) 
{
    string s = "";
    for (int i = 2; i < N; i++) {
        int pos = i, p = 1;
        for (int j = 2; j < pos; j++) {
            if (pos % j == 0) {
                p = 0;
                break;
            }
        }
        if (p) {
            s += str[pos];
        }
    }
    return s;
}