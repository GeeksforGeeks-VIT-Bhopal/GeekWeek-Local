//Longest Bracket problem 
public class Solution {   

    public static void solve(String s) {
        int n = s.length(), len = 0, cnt = 1,top;
        if (n == 0) {
            System.out.print("0 1");
            return;
        }
        top = 0;
        int[] first = new int[s.length() + 1];
        int[] second = new int[s.length() + 1];
        for (int i = 0; i < n; ++i) {
            if (s.charAt(i) == '(') {

                second[top++] = i;
                first[i] = 0;

            } else {
                if (top == 0) {
                    first[i] = 0;

                } else {

                    int k = second[--top], tmp = 0;

                    if (k > 0) {

                        tmp = i - k + 1 + first[k - 1];
                    } else {

                        tmp = i - k + 1;
                    }

                    first[i] = tmp;

                    if (tmp > len) {

                        len = tmp;
                        cnt = 1;

                    } else if (tmp == len) {

                        cnt++;
                    }
                }
            }
        }

        System.out.println(len + " " + cnt);
    }

}
