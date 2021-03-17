#include <bits/stdc++.h>

using namespace std;

string ceasarCipher(string s, int k, int n){
    for (int i = 0; i < n; i++){
        if (s[i] >= 97 && s[i] <= 122){
            //small alphabet
            k = k % 26;
            if (s[i] + k <= 122){
                s[i] = s[i] + k;
            }
            else{ 
                s[i] = k - 26 + s[i];
            }
        }
        else if(s[i] >= 65 && s[i] <= 90){
            //capital alphabet
            k = k % 26;
            if (s[i] + k <= 90){
                s[i] = s[i] + k;
            }
            else{
                s[i] = k - 26 + s[i];
            }
        }
    }
    return s;
}

int main(){
    string s;
    int k, n;
    cin >> n >> s >> k;
    cout << ceasarCipher(s, k, n);
}