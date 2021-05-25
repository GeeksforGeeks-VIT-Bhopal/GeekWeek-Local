#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    cin>>N;
    int A[N],i;
    for(i=0;i<N;i++){
        cin>>A[i];
    }
    for(i=N-1;i>=0;i--){
        cout<<A[i]<<" ";
    }
    return 0;
}
