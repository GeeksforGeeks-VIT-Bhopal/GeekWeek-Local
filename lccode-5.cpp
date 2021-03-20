class Solution {
public:
    bool isPalindrome(int x) {
        int xx = x;
        if (x < 0) return false;

        long long ret = 0;
        while (x >= 10) {
            ret = ret*10 + x%10;
            x /= 10;
        }
        ret = ret * 10 + x;

        return ret == xx;
    }
};
