*
    Time Complexity: O(N^2)
    Space Complexity: O(1)
    
    Where 'N' is the size of array.
*/

long long int query(long long int n, long long int q) {
    long long int total = 0;
    // Iterate through all cells and find the sum of the coordinates
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i + j == q) {
                total++;
            }
        }
    }
    return total;
}
