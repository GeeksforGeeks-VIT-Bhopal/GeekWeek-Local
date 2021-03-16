#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
        int max = 0, hgsum;
    max = arr[0][0]+arr[0][0+1] + arr[0][0+2]+arr[0+1][0+1]+arr[0+2][0]+arr[0+2][0+1]+arr[0+2][0+2];


  for(int i=0;i<=3;i++){
        for(int k=0;k<=3;k++){
        hgsum = arr[i][k]+arr[i][k+1]+ arr[i][k+2]+arr[i+1][k+1]+arr[i+2][k]+arr[i+2][k+1]+arr[i+2][k+2];
        if(hgsum>max){
            max = hgsum;
        }
        }
    }
    return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
