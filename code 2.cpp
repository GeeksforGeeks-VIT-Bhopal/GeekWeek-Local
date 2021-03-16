
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin>>n>>q;
    vector<vector<int>> vec;

    for(int i = 0; i < n; i++){
        vector<int> v1;
        int m,x;
        cin>>m;
        for(int j = 0; j < m; j++){
            cin>>x;
            v1.push_back(x);
        }
        vec.push_back(v1);
    }

    int i,j;

    for(int k = 0; k < q; k++){
        cin>>i>>j;
        cout<<vec[i][j]<<endl;
    }
    return 0;
}
