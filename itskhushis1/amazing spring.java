import java.util.*;
public class Solution {
    
    public static void answer(String s1, String s2, String s) {
        // Write your code here
        int l1=s1.length();
        int l2=s2.length();
        int l3=s.length();
        int i,j,co=0,t=l3;
        char ch1, ch2, ch3, ch4;
        String str="";
        if (l3<(l1+l2))
        {
            System.out.println("invalid entry");
        }
        else
        {
            for(i=0;i<l1;i++)
            {
                ch1=s1.charAt(i);
                for(j=0;j<l3;j++)
                {
                    ch2=s.charAt(j);
                    if(ch2==ch1){
                        co++;
                    }
                    else
                        str=str+ch2; 
                }
                
            }
            int l=str.length();
            for(i=0;i<l2;i++)
            {
                ch3=s2.charAt(i);
                for(j=0;j<l;j++)
                {
                    ch4=str.charAt(j);
                    if(ch4==ch3)
                    {
                        co++;
                        
                    }
                    else
                        str=str+ch4;
                        
                }
                
            }
            
            if(co==t)
                System.out.println("YES");
            else
                System.out.println("NO");
                    
        }

    }
    public static void main()
    {
        Scanner sc= new Scanner(System.in);
        System.out.println("first string:");
        String str1=sc.next();
        System.out.println("second string:");
        String str2=sc.next();
        System.out.println("third string:");
        String str3=sc.next();
        Solution obj=new Solution();
        obj.answer(str1,str2,str3);
    }

}

