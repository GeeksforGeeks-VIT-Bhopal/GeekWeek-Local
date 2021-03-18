class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool in = false, de = false;
        for (int i = 0; i + 1 < A.size(); ++i) {
            if (A[i] < A[i + 1]) {
                in = true;
            } else if (A[i] > A[i + 1]) {
                de = true;
            }
        }
        return !in || !de;
    }
};