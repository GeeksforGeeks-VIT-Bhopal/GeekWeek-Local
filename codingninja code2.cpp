/*
    Time Complexity : O(N^2*(N!))
    Space Complexity : O(N)

    where  ‘N’ is the number of people.
*/

#include <algorithm>

bool nextPermutaion(vector<int> &permutation, int n) {
    // Find lexicographical next permuation of given vector.

   for(int i = n-2; i >= 0; i--) {
       if(permutation[i] < permutation[i+1]) {
            int smallest = i+1;
            for(int j = i+1; j < n; j++) {
                if(permutation[j] > permutation[i] && permutation[j] < permutation[smallest]) {
                    smallest = j;
                }
            }
            swap(permutation[i], permutation[smallest]);
            reverse(permutation.begin()+i+1, permutation.end());
            return true;
        }
    }
    return false;
}

vector<int> findOrder(vector<int> &height, vector<int> &infront) {
    // Number of people in a queue.
    int n = height.size();

    // Create an array ‘permutation’ of size ‘N’ such that permutation[i]:= i.
    vector<int> permutation(n);
    for(int i = 0; i < n; i++) {
        permutation[i] = i;
    }

    // It will have actual order of people in a queue.
    vector<int> result(n);

    // One by one check for all the permutations whether it is an actual order of people in a queue or not
    do {
        bool flag = true;
        for(int i = 0; i < n; i++) {
            // Count number of people taller than ith person and standing in front of it.
            int tallerBefore = 0;
            for(int j = 0; j < i; j++) {
                if(height[permutation[j]] > height[permutation[i]]) {
                    tallerBefore++;
                }
            }

            if(tallerBefore != infront[permutation[i]]) {
                // This permutation cannot be actual order of people in a queue.
                flag = false;
                break;
            }
        }

        if(flag == true) {
            // This permutation is actual order of people in a queue.
            for(int i = 0; i < n; i++) {
                result[i] = height[permutation[i]];
            }
            break;
        }

    } while(nextPermutaion(permutation, n) == true);

    return result;
}
