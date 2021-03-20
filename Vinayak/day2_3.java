package helloWorld;

import java.util.Arrays;
import java.util.Scanner;
import java.util.Stack; 
	  

	public class Day2_3  {
		
		public static void main(String[] args) {
			String s="XNxmQCZUvD";
			int count=0;
			for(int i=0;i<s.length();i++) {
				if(s.charAt(i)=='a' || s.charAt(i)=='A') {
					count++;
				}else if(s.charAt(i)=='e' || s.charAt(i)=='E') {
					count++;
				}else if(s.charAt(i)=='i' || s.charAt(i)=='I') {
					count++;
				}else if(s.charAt(i)=='o' || s.charAt(i)=='O') {
					count++;
				}else if(s.charAt(i)=='u' || s.charAt(i)=='U') {
					count++;
				}
				else if(s.charAt(i)==' ') {
					count++;
				}
			}
			System.out.print(s.length()-count);

			
		}

	}