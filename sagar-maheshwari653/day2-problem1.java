import java.util.Scanner;
public class HollowRohmbusPattern {

    public static void main(String[] args) {

        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();

        int nst = n;            //initializing number of stars
        int nsp = n - 1;       // initializing number of spaces
        for (int i = 1; i <= n; i++) {

            // work for spaces
            for (int csp = 1; csp <= nsp; csp++) {
                System.out.print(" ");
            }

            // work for stars

            for (int cst = 1; cst <= nst; cst++) {
                System.out.print("*");
            }

            if (i > 1 && i < n) {
                for (int csp = 1; csp <= n - 2; csp++) {
                    System.out.print(" ");
                }
                System.out.print("*");
            }

            // preparation for next iteration

            if (i >= 1 && i < n - 1) {
                nst = 1;    // taking number of stars as 1 for in between rows

            } else {

                nst = n;     //taking number of stars as n for last row
            }
            nsp = nsp - 1;
            System.out.println();
        }

    }

}
