
public class Solution {
     static int i=0;

	public static String removeConsecutiveDuplicates(String s) {
		// Write your code here
        
        int l=s.length();
        if(l==0 ||l==1)
            return s ;
        if(s.charAt(0)==s.charAt(1))
        {
            
            while(l>1 && (s.charAt(0)==s.charAt(1)))
                s=s.substring(1,l);
            s=s.substring(1,l);
            return removeConsecutiveDuplicates(s);
        }
        String rem_str=removeConsecutiveDuplicates(1,l);
         if(l!=0 && (s.charAt(0)==rem_str.charAt(0)))
         {
             
         }
	}

}
