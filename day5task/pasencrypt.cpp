#include<iostream>
using namespace std:

int main(void) {
  int i,x;
  char str[100];
  
  cout<<"Please enter password:\t";
  cin>>str;
  for(i=0;(i<100 && str[i] != '\0');i++){
    str[i] = str[i] + 2;
  }
  cout<<"\nEncrypted password is:"<<str<<endl;
}
