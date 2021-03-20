import java.util.HashSet;
import java.util.Set;


public class ABBADiv1 {

    private static final String FAIL = "Impossible";
    private static final String PASS = "Possible";

    private static String canObtain(String initial, String target) {
        int len = target.length();
        Set<String> temp = new HashSet<>();
        temp.add(target);

        while(initial.length() != len) {
            Set<String> nTemp = new HashSet<>();
            for(String t : temp) {
                if(t.endsWith("A")) nTemp.add(t.substring(0,t.length()-1));
                if(t.startsWith("B")) nTemp.add(reverse(t.substring(1)));
            }
            len--;

            temp.clear();
            temp.addAll(nTemp);
        }

        if(temp.contains(initial)) return PASS;
        else return FAIL;
    }

    private static String reverse(String initial) {
        int len = initial.length();
        char[] arr = initial.toCharArray();
        for(int i=0; i<len/2; i++) {
            char temp = arr[i];
            arr[i] = arr[len-i-1];
            arr[len-i-1] = temp;
        }
        return String.valueOf(arr);
    }

    public static void main(String[] args) {
        System.out.println("Test0: " + canObtain("A", "BABA"));
        System.out.println("Test1: " + canObtain("BAAAAABAA", "BAABAAAAAB"));
        System.out.println("Test2: " + canObtain("A", "ABBA"));
        System.out.println("Test3: " + canObtain("AAABBAABB", "BAABAAABAABAABBBAAAAAABBAABBBBBBBABB"));
        System.out.println("Test4: " + canObtain("AAABAAABB", "BAABAAABAABAABBBAAAAAABBAABBBBBBBABB"));
        System.out.println("Test5:" + canObtain("B","BBBBB"));
        System.out.println("Test6: " + canObtain("BA","ABB"));
    }
}
