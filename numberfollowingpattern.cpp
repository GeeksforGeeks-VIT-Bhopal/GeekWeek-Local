string numFollowingPattern(string &s)
{
    int n = s.size();
    // Create an empty stack.
    stack<int>st;
    // Create an empty string for the output.
    string ans = "";

    // As the length of the output string is one more than the
    // input string, so run a loop from i = 0 to i <= S.length().
    for (int i = 0; i <= n; i++)
    {
        // Always push i+1 into the stack.
        st.push(i + 1);

        // If we are at the last or current character is I, then
        // pop the element and add it into the ans string
        // until the stack becomes empty.
        if (i == n || s[i] == 'I')
        {
            while (!st.empty())
            {
                ans += char('0' + st.top());
                st.pop();
            }

        }

    }

    return ans;
}
