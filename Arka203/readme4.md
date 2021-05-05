Q1. 
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
Q2.
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
Q3.
public class ABC {

    private static boolean atCLimit(int idx, int n) {
        if(n%2==0) {
            return idx >= n/2;
        } else {
            return idx > n/2;
        }
    }
    public static String createString(int n, int k) {
        char[] result = new char[n];
        // we need more pairs than there are spaces
        if(k > n) {

            // initialize string with A's
            for(int i=0; i<n-1; i++) result[i] = 'A';

            // track c-index and number of pairs
            int cIdx = n-1;
            int cPairs;

            // while we haven't exceeded the number of pairs
            // and we haven't filled more than half of the string with C's
            do {
                // place a C at the end of the string and update vars
                result[cIdx] = 'C';
                cPairs = (n-cIdx) * cIdx;
                cIdx--;
            }
            while((n-cIdx) * cIdx <= k && atCLimit(cIdx, n));

            // if we haven't reached our goal then lets place some B's
            // starting where the next C would have gone
            if(cPairs != k) {
                // track the b-index
                int bIdx = cIdx;
                int bN = cIdx+1;
                int bK = k-cPairs;
                int bPairs = 0;

                if(bK >= bN) {
                    do {
                        result[bIdx] = 'B';
                        bPairs = (bN - bIdx) * bIdx;
                        bIdx--;
                    }
                    while ((bN - bIdx) * bIdx <= bK && bIdx >= bN / 2);
                }

                if(bPairs+cPairs != k) {
                    if(bIdx <= bN/2) {
                        return "";
                    }
                    bPairs = (cIdx - bIdx)*bIdx;
                    int pairsLeft = bK-bPairs;
                    result[pairsLeft] = 'B';
                }
            }

        }
        // we have more spaces than there are pairs
        else if (k < n) {
            int gap = n-k-1;
            for(int i=0; i<gap; i++) result[i] = 'C';
            for(int i=gap; i<n-1; i++) result[i] = 'A';
            result[n-1] = 'B';
        } else {
            result[0] = 'A';
            result[1] = 'B';
            result[2] = 'C';
            for(int i=3; i<n; i++) result[i] = 'B';
        }

        return String.valueOf(result);
    }

    public static void main(String[] args) {
        System.out.println("Answer: " + createString(5,10));
    }
}
Q4.
public class ABCPath {
    private int runningScore = 0;
    private int maxScore = 0;

    /**
     * Method to find the length of the longest path of consecutive letters, starting at 'A'.
     * @param grid the grid to traverse
     * @return longest path of consecutive letters
     */
    public int length(String[] grid) {
        // find the index of all 'A' chars
        for(int row=0; row < grid.length; row++) {
            for(int col=0; col < grid[0].length(); col++) {
                // for each 'A' index, begin a search looking up, down, right, left for greater chars
                if('A' == grid[row].charAt(col)) {
                    beginSearch(grid, row, col);
                }
            }
        }

        return maxScore;
    }

    /*
    Given a valid row/col, this method will search for the next char in the sequence
    updating runningScore until its impossible, at which point maxScore will be
    updated if the runningScore has exceeded it.
     */
    private void beginSearch(final String[] grid, final int row, final int col) {
        runningScore++;

        // check up
        if(row>0 && grid[row].charAt(col)+1 == grid[row-1].charAt(col)) {
            beginSearch(grid, row-1, col);
        }
        // check down
        if(row<grid.length-1 && grid[row].charAt(col)+1 == grid[row+1].charAt(col)) {
            beginSearch(grid, row+1, col);
        }
        // check left
        if(col>0 && grid[row].charAt(col)+1 == grid[row].charAt(col-1)) {
            beginSearch(grid, row, col-1);
        }
        // check right
        if(col<grid[0].length()-1 && grid[row].charAt(col)+1 == grid[row].charAt(col+1)) {
            beginSearch(grid, row, col+1);
        }
        // check upper left
        if(row>0 && col>0 && grid[row].charAt(col)+1 == grid[row-1].charAt(col-1)) {
            beginSearch(grid, row-1, col-1);
        }
        // check upper right
        if(row>0 && col<grid[0].length()-1 && grid[row].charAt(col)+1 == grid[row-1].charAt(col+1)) {
            beginSearch(grid, row-1, col+1);
        }
        // check bottom left
        if(row<grid.length-1 && col>0 && grid[row].charAt(col)+1 == grid[row+1].charAt(col-1)) {
            beginSearch(grid, row+1, col-1);
        }
        // check bottom right
        if(row<grid.length-1 && col<grid[0].length()-1 && grid[row].charAt(col)+1 == grid[row+1].charAt(col+1)) {
            beginSearch(grid, row+1, col+1);
        }

        // update maxScore
        if(!(row>0 && grid[row].charAt(col)+1 == grid[row-1].charAt(col))
                && !(row<grid.length-1 && grid[row].charAt(col)+1 == grid[row+1].charAt(col))
                && !(col>0 && grid[row].charAt(col)+1 == grid[row].charAt(col-1))
                && !(col<grid[0].length()-1 && grid[row].charAt(col)+1 == grid[row].charAt(col+1))
                && !(row>0 && col>0 && grid[row].charAt(col)+1 == grid[row-1].charAt(col-1))
                && !(row>0 && col<grid[0].length()-1 && grid[row].charAt(col)+1 == grid[row-1].charAt(col+1))
                && !(row<grid.length-1 && col>0 && grid[row].charAt(col)+1 == grid[row+1].charAt(col-1))
                && !(row<grid.length-1 && col<grid[0].length()-1 && grid[row].charAt(col)+1 == grid[row+1].charAt(col+1))
        ) {
            if(maxScore<runningScore)
                maxScore = runningScore;
            runningScore = 0;
        }
    }
}
Q5.
public class ANewHope {


    public int count(int[] firstWeek, int[] lastWeek, int D) {
        int N = firstWeek.length;

        boolean same = true;
        for(int i=0; i<N; i++) same &= firstWeek[i] == lastWeek[i];
        if(same) return 1;

        int gap = N-D;


        return gap;
    }

    public static void main(String[] args) {
        ANewHope hope = new ANewHope();
        System.out.println(hope.count(new int[]{1,2,3,4}, new int[]{4,3,2,1}, 3));
    }
}
