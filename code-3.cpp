string removeConsecutiveDuplicates(
{
if (s.size() <= 1)
{
return s;
}
if (s[0] == s[1])
{
return removeConsecutiveDup
}
else
{
string small = removeConsec
return s[0] + small;
}
}
