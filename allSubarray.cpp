#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            for (int k = i; k < j; k++){
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}