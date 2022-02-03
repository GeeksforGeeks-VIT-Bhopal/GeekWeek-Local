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
