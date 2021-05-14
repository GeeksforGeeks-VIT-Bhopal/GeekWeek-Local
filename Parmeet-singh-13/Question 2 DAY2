#include <memory.h>

void checkPangram(string s, int n)
{
    int answer = 0;
    int freq[255];
    memset(freq, 0, sizeof(freq));
    for (int i = 0; i < n; i++)
    {
        freq[s[i]]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq['a' + i] > 0 || freq['A' + i] > 0)
        {
            answer++;
        }
    }

    cout << (answer == 26 ? "YES" : "NO") << endl;

    return;
}
