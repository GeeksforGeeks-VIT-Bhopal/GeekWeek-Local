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