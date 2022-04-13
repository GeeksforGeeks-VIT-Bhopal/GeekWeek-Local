public class Solution {

	public static void checkPangram(String s, int n) {
		// Write your code here
        int i,co=0;
        char j,ch;
        String str="";
        s=s.toLowerCase();
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(s.charAt(i)==s.charAt(j))
                    break;
                
            }
            if(i==j)
                str=str+s.charAt(i);
        }
        int l=str.length();
        if(l==26)
            System.out.println("YES");
        else
            System.out.println("NO");
	}

}
