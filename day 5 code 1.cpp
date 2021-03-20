#include <algorithm>

int maximumProduct(vector<int> &arr, int n){
    
    int ans = INT_MIN;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){

            int currentProduct = 1;
            for(int k = i; k <= j; k++){
                currentProduct = currentProduct * arr[k];
                ans = max(ans, currentProduct);
            }
        }
    }

    return ans;
}
