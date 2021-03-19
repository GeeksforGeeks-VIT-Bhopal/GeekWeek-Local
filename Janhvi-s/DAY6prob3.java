class Solution {
    public int countDigitOne(int n) {
        if (n <= 0) {
            return 0;
        }
        int m = n;
        int sum = 0;
        int e = 1;
        while (n > 0) {
            int r = n % 10;
            n /= 10;
            if (r == 0) {
                sum += n * e;
            } else if (r > 1) {
                sum += (n + 1) * e;
            } else { // r == 1
                sum += m - n * 9 * e - e + 1;
            }
            e *= 10;
        }
        return sum;
    }
}
