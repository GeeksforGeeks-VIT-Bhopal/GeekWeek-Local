package com.samuelale.practice;

import java.util.HashSet;
import java.util.Scanner;


public class AlgSearchPairs {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int K = s.nextInt();
        HashSet<Integer> valSet = new HashSet<>();
        for (int i=0; i<N; i++) {
            valSet.add(s.nextInt());
        }

        HashSet<Integer> modSet = new HashSet<>(valSet);
        int pairs = 0;
        for(int val : valSet) {
            if(modSet.contains(val+K) || modSet.contains(val-K)) {
                pairs++;
            }
            modSet.remove(val);
        }
        System.out.print(pairs);
    }
}
