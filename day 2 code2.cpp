#include <bits/stdc++.h> 
using namespace std; 
  
const int MAX_CHAR = 26; 
  
// function to return true if strings have  
// common substring and no if strings have 
// no common substring 
bool twoStrings(string s1, string s2) { 
  
  // vector for storing character occurrences 
  vector<bool> v(MAX_CHAR, 0); 
  
  // increment vector index for every 
  // character of str1 
  for (int i = 0; i < s1.length(); i++) 
    v[s1[i] - 'a'] = true; 
  
  // checking common substring of str2 in str1 
  for (int i = 0; i < s2.length(); i++)  
    if (v[s2[i] - 'a'])  
       return true; 
   
  return false;         
} 
  
 
int main() { 
  string str1 = "hello"; 
  string str2 = "world"; 
  if (twoStrings(str1, str2)) 
     cout << "Yes"; 
  else
     cout << "No"; 
  return 0; 
} 
