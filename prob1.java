//ABBA
import java.util.HashSet;
import java.util.Set;

public class ABBA {

    private static final String FAIL = "Impossible";
    private static final String PASS = "Possible";

//    private static String canObtain(String initial, String target) {
//        if(initial.equals(target)) return PASS;
//        else if(initial.length() == target.length()) return FAIL;
//
//        if(canObtain(initial+"A", target).equals(PASS)) return PASS;
//        if(canObtain(reverse(initial) + "B", target).equals(PASS)) return PASS;
//
//        return FAIL;
//    }

    private static String canObtain(String initial, String target) {
        int len = target.length();
        Set<String> temp = new HashSet<>();
        temp.add(target);

        while(initial.length() != len) {
            Set<String> nTemp = new HashSet<>();
            for(String t : temp) {
                if(t.endsWith("A")) nTemp.add(t.substring(0,t.length()-1));
                else if(t.endsWith("B")) nTemp.add(reverse(t.substring(0,t.length()-1)));
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
        System.out.println("Test1: " + canObtain("AB","ABB"));
        System.out.println("Test2: " + canObtain("BBAB", "ABABABABB"));
        System.out.println("Test3: " + canObtain("BBBBABABBBBBBA", "BBBBABABBABBBBBBABABBBBBBBBABAABBBAA"));
        System.out.println("Test4: " + canObtain("A","BB"));
        System.out.println("Test5: " + canObtain("B","BBBBB"));
        System.out.println("Test6: " + canObtain("BA","ABB"));
    }
}