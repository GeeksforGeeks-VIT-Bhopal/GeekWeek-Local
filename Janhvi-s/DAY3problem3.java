//JAVA DEQUEUE
//In this problem, you are given  integers. 
//You need to find the maximum number of unique integers among all the possible contiguous subarrays of size .
import java.util.*;
    public class test {
        public static void main(String[] args) {
            Scanner in = new Scanner(System.in);
            Deque<Integer> deque = new ArrayDeque<>();
            HashSet<Integer> set = new HashSet<>();
            int n = in.nextInt();
            int m = in.nextInt();
            int max = Integer.MIN_VALUE;
            for (int i = 0; i < n; i++) {
            int input = in.nextInt();
            
            deque.add(input);
            set.add(input);
            
            if (deque.size() == m) {
                if (set.size() > max) max = set.size();
                int first = deque.remove();
                if (!deque.contains(first)) set.remove(first);
            }
        }
        
        System.out.println(max);
    }
}


