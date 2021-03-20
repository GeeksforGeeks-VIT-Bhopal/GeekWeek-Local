#You are given a string S. Your task is to determine if the given string S contains two non-overlapping substrings "AB" and "BA" (the substrings can go in any order). Print "YES" or "NO".





#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;

void twoSubstrings(char *s)
{
    char *p;
    if ((p = strstr(s, "AB")) and strstr(p + 2, "BA"))
    {
        cout << "YES";
    }
    else if ((p = strstr(s, "BA")) and strstr(p + 2, "AB"))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
