public class DynamicArray {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int Q = s.nextInt();

        Map<Integer, List<Integer>> seqList = new HashMap<>();
        int lastAns = 0;

        for(int q=0; q<Q; q++) {
            int qType = s.nextInt();
            int x = s.nextInt();
            int y = s.nextInt();
            int idx = (x ^ lastAns) % N;
            seqList.putIfAbsent(idx, new ArrayList<>());
            List<Integer> seq = seqList.get(idx);
            if(qType == 1) {
                seq.add(y);
            } else {
                lastAns = seq.get(y % seq.size());
                System.out.println(lastAns);
            }
        }
    }
}
