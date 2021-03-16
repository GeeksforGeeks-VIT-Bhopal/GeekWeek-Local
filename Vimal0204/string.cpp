#include <iostream> 
using namespace std; 
const int maximum = 521; 
bool do_aStr2(string,string);
bool z;
int main() 
{ 
    string str1 = "vimal"; 
    string str2 = "mavi"; 
    z=do_aStr2(str1,str2);
    if (z) 
       cout << "Yes"; 
    else
       cout << "No"; 
    return 0; 
} 
bool do_aStr2(string str1, string str2) 
{ 
    int count[maximum] = {0}; 
    for (int i = 0; i < str1.length(); i++) 
        count[str1[i]]++; 
          

    for (int i = 0; i < str2.length(); i++) 
    { 
        if (count[str2[i]] == 0) 
           return false; 
        count[str2[i]]--; 
    } 
    return true; 
} 