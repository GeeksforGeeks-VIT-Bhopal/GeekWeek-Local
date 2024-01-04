#include<iostream>
using namespace std;
int main(){
int a,b;
string num[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
cin >> a >> b;
for (int i = a; i <= b; ++i) {
    if (i > 9) {
        i % 2 == 0 ? cout << "even\n" : cout << "odd\n";
    } else {
        cout << num[i] << endl;
    }        
}    
return 0;
}
