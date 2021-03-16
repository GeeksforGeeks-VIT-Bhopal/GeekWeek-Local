#include <cstdlib>
#include <memory.h>

int S1[256], S2[256], S[256];

void answer(string s1, string s2, string s)
{
    memset(S1, 0, sizeof S1);
    memset(S2, 0, sizeof S2);
    memset(S, 0, sizeof S);

    for (int i = 0; i < s1.size(); i++)
    {
        S1[s1[i]]++;
    }

    for (int i = 0; i < s2.size(); i++)
    {
        S2[s2[i]]++;
    }

    for (int i = 0; i < s.size(); i++)
    {
        S[s[i]]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (S[i] != S1[i] + S2[i])
        {
            cout << "NO" << endl;
            exit(0);
        }
    }
    cout << "YES" << endl;
    return;
}
