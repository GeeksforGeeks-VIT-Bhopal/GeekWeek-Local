package com.samuelale.practice;
import java.math.BigInteger;
import java.util.Scanner;


public class FibonacciMod {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        BigInteger t1 = s.nextBigInteger();
        BigInteger t2 = s.nextBigInteger();
        BigInteger n = s.nextBigInteger();

        BigInteger ti = new BigInteger("0");
        for(int i=3; i<=n.intValue(); i++) {
            ti = t1.add(t2.pow(2));
            t1 = t2;
            t2 = ti;
        }
        System.out.println(ti);
    }

}
