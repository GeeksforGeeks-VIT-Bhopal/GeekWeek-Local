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