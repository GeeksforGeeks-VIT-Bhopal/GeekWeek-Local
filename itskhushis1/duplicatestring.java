public class Solution {
     static int i=0;
	public static String removeConsecutiveDuplicates(String s) {
		// Write your code here        
        int l=s.length();
        
        if(l==0 ||l==1)
            return s ;
        if(l>2){
            if(i<l)
            {
                char ch1=s.charAt(i);
                char ch2=s.charAt(i+1);
                if (ch1==ch2){
                    i++;
                    return removeConsecutiveDuplicates(ch1+s.substring((i+1),l));
                }
                else{
                    i++;
                    return removeConsecutiveDuplicates(s);
                }
            }
            return s;
        }
        else {
            if(s.charAt(0)==s.charAt(1))
                 return s.substring(1,l);
            else return s;
        }
	}
}
