#include<iostream>
#include<string.h>
using namespace std;
void main()
{
  string s;
  cin>>s;
  string rev;
  for(int i=s.length();i>0;i--)
    rev+=s[i-1];
  if(rev==s)
    cout<<"Pallindrome";
  else 
    cout<<"Not Pallindrome";
}
