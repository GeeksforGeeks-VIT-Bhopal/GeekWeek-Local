class test11{
    static void average(int...a) {

        double n=a.length;
        System.out.println(n);
        int sum=0;
        for(int i:a) {
            sum=sum+i;
        }
        System.out.println(sum/n);

    }
}
class stringTest{
    static void concatstring(String...s) {
        int n=s.length;
        String concat="";
        for(int i=0;i<n;i++) {
            concat=concat+s[i];
        }
        System.out.println(concat);
    }
}
public class Argsclass{
    public static void main(String[] args) {
        test11.average(15, 8, 7, 8, 7);
        stringTest.concatstring("a", "bbbb", "wudehd");
    }
}