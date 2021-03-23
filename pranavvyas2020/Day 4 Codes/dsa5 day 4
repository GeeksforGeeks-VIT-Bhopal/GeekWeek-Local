bool is_palindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}
// returns true if there is a palindrome of length x
int good(int x, string s) {
    int n = s.length();
    for(int L = 0; L + x <= n; L++) {
        if(is_palindrome(s.substr(L, x))) {
            return L;
        }
    }
    return -1;
}
class Solution {
public:
    string longestPalindrome(string s) {
        int best_len = 0;
        string best_s = "";
        int n = s.length();
        for(int parity : {0, 1}) {
            int low = 1, high = n;
            if(low % 2 != parity) low++;
            if(high % 2 != parity) high--;
            while(low <= high) {
                int mid = (low + high) / 2;
                if(mid % 2 != parity) {
                    mid++;
                }
                if(mid > high) {
                    break;
                }
                int tmp = good(mid, s);
                if(tmp != -1) {
                    if(mid > best_len) {
                        best_len = mid;
                        best_s = s.substr(tmp, mid);
                    }
                    low = mid + 2;
                }
                else {
                    high = mid - 2;
                }
            }
        }
        return best_s;
    }
};
