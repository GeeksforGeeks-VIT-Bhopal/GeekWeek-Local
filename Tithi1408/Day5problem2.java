[4:48 PM, 3/19/2021] +91 95994 45008: public class ABoardGame {
    private static final String ALICE = "Alice";
    private static final String BOB = "Bob";
    private static final String DRAW = "Draw";

    public String whoWins(String[] board) {
        int bLen = board.length-1;
        int region = bLen/2;

        while(region >= 0) {
            int bCount = 0;
            int aCount = 0;
            // top row, left to right
            for(int i=region; i<bLen-region; i++) {
                if(board[region].charAt(i) == 'A') aCount++;
                else if(board[region].charAt(i) == 'B') bCount++;
            }
            // right column, top to bottom
            for(int i=region; i<bLen-region; i++) {
                if(board[i].charAt(bLen-region) == 'A') aCount++;
                else if(board[i].charAt(bLen-region) == 'B') bCount++;
            }
            // bottom row, right to left
            for(int i=bLen-region; i>region; i--) {
                if(board[bLen-region].charAt(i) == 'A') aCount++;
                else if(board[bLen-region].charAt(i) == 'B') bCount++;
            }
            // left column, bottom to top
            for(int i=bLen-region; i>region; i--) {
                if(board[i].charAt(region) == 'A') aCount++;
                else if(board[i].charAt(region) == 'B') bCount++;
                System.out.println(Runtime.getRuntime().totalMemory());
            }

            if(aCount > bCount) return ALICE;
            else if(aCount < bCount) return BOB;
            else region--;
                System.out.println(Runtime.getRuntime().totalMemory());
        }
                System.out.println(Runtime.getRuntime().freeMemory());

        return DRAW;
    }


    public static void main(String[] args) {
        String[] board = {
                "BBB..BAB...B.B",
                ".AAAAAAAAAAAA.",
                "AA.AA.AB..A.AB",
                "..........B.AB",
                ".A..BBAB.A.BAB",
                ".AB.B.......A.",
                ".A..A.AB.A..AB",
                ".ABAA.BA...BA.",
                "BAAAB.....ABA.",
                ".A....B..A..B.",
                "B...B....B..A.",
                "BA.B..A.ABA.A.",
                "BAAAA.AAAAA.A.",
                "B.B.B.BB.B...."
        };

        String res = new ABoardGame().whoWins(board);
        System.out.println(res);
    }
}
[4:48 PM, 3/19/2021] +91 95994 45008: DynamicArray.java


package com.samuelale.practice;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;



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
