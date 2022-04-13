#include <iostream>
#include <vector>
#include <string>
using namespace std;
                                                                 //converting normal message into whale sounds//
int main()
{
   // Whale, whale, whale.
  // What have we got here?
string name="turpentine and turtles";
vector<char> vowels={'a','e','i','o','u'};
vector<char> result;

for(int i=0; i<name.size();i++)
{
  for(int j=0;j<vowels.size();j++)
  {
    if(name[i]==vowels[j])
    {
      result.push_back(name[i]);
      if(name[i]=='u'||name[i]=='e')
      {
         result.push_back(name[i]);
      }
    }
    
  }
  
}

for(int k=0;k<result.size();k++)
{
  cout<<result[k];
}
}