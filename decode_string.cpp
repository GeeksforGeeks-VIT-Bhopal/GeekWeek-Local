#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string decodeString(string s)
    {
        stack<char> st;
        int i = 0;
        while (i < s.size())
        {
            if (s[i] == ']')
            {
                string res = "";
                while (st.top() != '[')
                {
                    res = st.top() + res;
                    st.pop();
                }
                st.pop();
                int n = 0;
                int x = 1;
                while (!st.empty() && st.top() >= '0' && st.top() <= '9')
                {
                    n = n + (st.top() - '0') * x;
                    x *= 10;
                    st.pop();
                }
                for (int j = 1; j <= n; j++)
                {
                    for (int x = 0; x < res.size(); x++)
                    {
                        st.push(res[x]);
                    }
                }
            }
            else
            {
                st.push(s[i]);
            }
            i++;
        }
        string ans = "";
        while (!st.empty())
        {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};
main()
{
    Solution ob;
    cout << ob.decodeString("1[ba]2[na]");
}
