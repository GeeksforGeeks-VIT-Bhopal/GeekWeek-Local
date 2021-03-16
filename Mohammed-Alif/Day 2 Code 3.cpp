#include<iostream>  
#include<cstring.h>  
using namespace std;  
void main()  
{  
    char key[25], buffer[25];  
    cout << "Enter the key string: ";  
    cin.getline(key, 25);  
    strcpy(buffer, key);  
    cout << "Key = "<< key << endl;  
    cout << "Buffer = "<< buffer<<endl;    
} 
