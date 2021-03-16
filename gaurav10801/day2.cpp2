#include<iostream>
#include<string.h>

string getCompressedString(string s)
{
    int n = s.length();
    string answer = "";

    if (n == 0)
    {
        return answer;
    }

    int currentCharCount = 1;
    answer += s[0];

    for (int i = 1; i < n; ++i)
    {
        if (s[i] == s[i - 1])
        {
            ++currentCharCount;
        }
        else
        {
            if (currentCharCount > 1)
            {
                answer += to_string(currentCharCount);
                currentCharCount = 1;
            }

            answer += s[i];
        }
    }

    if (currentCharCount > 1)
    {
        answer += to_string(currentCharCount);
    }

    return answer;
}
