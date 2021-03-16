import java.util.Scanner;

public class arrow {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int s=sc.nextInt();
		for(int i=1;i<=s;i++)
		{
			for(int j=1;j<=i;j++)
			{
				if((j>=1 && j<i || i%2!=0) && i!=s)
				{
					System.out.printf("%s"," ");
				}
				else
				{
					System.out.print("*");
				}
			}
			
			for(int j=2*(s-i);j>=0;j--)
			{
				System.out.print(" ");
			}
			
			for(int j=i;j>=1;j--)
			{
				if((j>=1 && j<i || i%2!=0) && i!=s)
				{
					System.out.printf("%s"," ");
				}
				else
				{
					System.out.print("*");
				}
			}
		   System.out.println();
		}
		for(int i=s-1;i>=1;i--)
		{
			for(int j=1;j<=i;j++)
			{
				if((j>=1 && j<i || i%2!=0) && i!=s)
				{
					System.out.printf("%s"," ");
				}
				else
				{
					System.out.print("*");
				}
			}
			
			for(int j=2*(s-i);j>=0;j--)
			{
				System.out.print(" ");
			}
			
			for(int j=i;j>=1;j--)
			{
				if((j>=1 && j<i || i%2!=0) && i!=s)
				{
					System.out.printf("%s"," ");
				}
				else
				{
					System.out.print("*");
				}
			}
		   System.out.println();
		}
		
	}
}