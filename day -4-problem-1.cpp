#include <bits/stdc++.h> 
using namespace std; 
#define CharacterCount 128 //can change
  
int longestSubseq(char* myString) 
{ 
    int n = strlen(myString); 
    int currentLength = 1; 
    int previousIndex;  
    int * alreadyVisited = new int[sizeof(int) * CharacterCount]; 
  
    for (int i = 0; i < CharacterCount; i++) 
        alreadyVisited[i] = -1; 
  
    alreadyVisited[myString[0]] = 0; 
  
    for (int i = 1; i < n; i++) { 
        previousIndex = alreadyVisited[myString[i]]; 

        if (previousIndex == -1 || i - currentLength > previousIndex) 
            currentLength++; 
  
        else { 
            if (currentLength > maxLength) 
                maxLength = currentLength; 
  
            currentLength = i - previousIndex; 
        } 
        alreadyVisited[myString[i]] = i; 
    } 
  
   if (currentLength > maxLength) 
        maxLength = currentLength; 
  
    free(alreadyVisited); 
    return maxLength; 
} 

int main() 
{ 
    char myString[] = "ABABCB"; 
    cout << "My string is : " << myString << endl; 
    int len = longestSubseq(myString); 
    cout << "The length of the longest substring "
         << "with non repeating characters is : "
         << len; 
    
    return 0;
} 
