char findAddedCharacter(string s, string t) 
{
    int a = s.size(), b = t.size();
    for (int i = 0; i < a; i++) 
    {
        if (s[i] != t[i]) 
        {
            return t[i];
        }
    }
    return t[b - 1];
}