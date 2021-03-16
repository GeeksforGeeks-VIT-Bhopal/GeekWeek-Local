import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;
public class Solution {
    public static void main(String[] args) {
        Scanner I = new Scanner(System.in);
        int s=-1000000000,m=0,arr[][] = new int[6][6];
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                arr[i][j] = I.nextInt();
            }
        }
        for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++,m=0){
            m=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j+0]+arr[i+2][j+1]+arr[i+2][j+2];
            if(s<=m)
              s=m;
        } 
         System.out.println(s);   
    }
}
