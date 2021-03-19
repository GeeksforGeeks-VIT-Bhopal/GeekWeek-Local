int findMaxValue(vector<vector<int>>& mat, int n) {
    int maxVal = INT_MIN;

    for (int c = 0; c < n - 1; c++) {
        for (int d = 0; d < n - 1; d++) {
            for (int a = c + 1; a < n; a++) {
                for (int b = d + 1; b < n; b++) {
                    maxVal = max(maxVal, mat[a][b] - mat[c][d]);
                }
            }
        }
    }

    return maxVal;

}
