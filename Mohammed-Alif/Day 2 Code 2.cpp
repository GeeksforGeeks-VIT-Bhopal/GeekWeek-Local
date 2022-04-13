#include<iostream>
#include<string.h>
void main() 
{
  string s;
  cin>>s;
  char ch;
  cin>>ch;
  int count=0;
  for(int i=0;i<s.length();i++)
  {
    if(ch==s[i])
      count++;
  }
  cout<<"The frequency is: "<<count;
}
