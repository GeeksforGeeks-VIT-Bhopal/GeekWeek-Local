//Java Stack
//A string containing only parentheses is balanced if the following is true: 1. if it is an empty string 2. if A and B are correct, AB is correct, 3. if A is correct, (A) and {A} and [A] are also correct.
//Examples of some correctly balanced strings are: "{}()", "[{()}]", "({()})"
//Examples of some unbalanced strings are: "{}(", "({)}", "[[", "}{" etc.
//Given a string, determine if it is balanced or not.

import java.util.*;
class Solution{
    
    public static void main(String []argh)
    {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            String input=sc.next();
            Stack<Character> stacky = new Stack<>();
            for (int i = 0; i < input.length(); i++) {
            if (!stacky.isEmpty()) {
            switch(input.charAt(i)) {
                case '}' : if (stacky.peek() == '{') {
                    stacky.pop();
                } break;
                case ']' : if (stacky.peek() == '[') {
                    stacky.pop();
                } break;
                case ')' : if (stacky.peek() == '(') {
                    stacky.pop();
                } break;
                default: stacky.push(input.charAt(i));
          }
        } else {
            stacky.push(input.charAt(i));
        } 
     }
     System.out.println(stacky.isEmpty());
  }
        }
        
    }
