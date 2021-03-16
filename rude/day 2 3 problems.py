public class Solution {

    public static void answer(String s1, String s2, String s) {

        int[] S1 = new int[256];
        int[] S2 = new int[256];
        int[] S = new int[256];

        for (int i = 0; i < s1.length(); i++) {
            S1[s1.charAt(i)]++;
        }
        for (int i = 0; i < s2.length(); i++) {
            S2[s2.charAt(i)]++;
        }
        for (int i = 0; i < s.length(); i++) {
            S[s.charAt(i)]++;
        }
        for (int i = 0; i < 256; i++) {
            if (S[i] != S1[i] + S2[i]) {

                System.out.println("NO");

                return;
            }
        }
        System.out.println("YES");
    }

}


### code 2
def removeConsecutiveDuplicates(s):
    if len(s) <= 1:
        return s
    s2 = removeConsecutiveDuplicates(s[1:])
    if s[0] == s[1]:
        return s2
    else:
        return s[0]+s2


# Main
s = input().strip()
print(removeConsecutiveDuplicates(s))


###code 3
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

