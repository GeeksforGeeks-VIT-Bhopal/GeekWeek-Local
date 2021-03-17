string removeConsecutiveDuplicates(string s)
{
    if (s.size() <= 1)
    {
        return s;
    }
    if (s[0] == s[1])
    {
        return removeConsecutiveDuplicates(s.substr(1));
    }
    else
    {
        string small = removeConsecutiveDuplicates(s.substr(1));
        return s[0] + small;
    }
}
