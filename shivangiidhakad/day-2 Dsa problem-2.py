public class Solution {

    public static void checkPangram(String s, int n) {
        int answer = 0;

        int[] freq = new int[255];

        for (int i = 0; i < n; i++) {
            freq[s.charAt(i)]++;
        }

        for (int i = 0; i < 26; i++) {
            if (freq['a' + i] > 0 || freq['A' + i] > 0) {
                answer++;
            }
        }

        System.out.println((answer == 26 ? "YES" : "NO"));

    }

}
