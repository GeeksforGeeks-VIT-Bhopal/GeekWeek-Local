class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        constexpr int top_limit = INT_MAX/10;
        constexpr int bottom_limit = INT_MIN/10;
        while (x) {
            if (rev > top_limit || rev < bottom_limit)
                return 0;
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev;
    }
};
