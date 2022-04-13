#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

int A[100][100];

int main() {
    
  string TString;
  int N;

  getline(cin, TString);
  N = stoi(TString);

  if(N < 1 || N > 100) {
    exit(1);
  }

  for(int i = 0; i< N;i++) {
    string line;
    getline(cin, line);    
    stringstream LineStream(line);
    
    for(int j=0;j<N;j++){
        LineStream >> A[i][j];
    }
  }
    int d1 =0;
    int d2 =0;
    
    for(int i=0;i<N;i++) {
        d1 += A[i][i];
        d2 += A[i][N-i-1];
    }
    
    cout << abs(d1-d2) << endl;
    
    return 0;
}
