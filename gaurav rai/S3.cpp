#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
    string str;
    while(cin>>str){
        int l = str.size();
        if(l <= 3) cout<<"NO"<<endl;
        else{
            int a = str.find("AB");
            int b = str.find("BA", a + 2);
            int c = str.find("BA");
            int d = str.find("AB", c + 2);
            if ((a != -1 && b != -1) || (c != -1 && d != -1))
                puts("YES");
            else
                puts("NO");
            }
    }
    return 0;
}
 
