/*
5 5 5 5 5
4 5 5 5 5
3 4 5 5 5
2 3 4 5 5
1 2 3 4 5 */

# include <iostream>
using namespace std;

int main()
{
	int i, j, k;
	
	for (i=5; i>=1; i--)
	{
		for(j=i;j<=4; j++)
		
		cout<<j<<"  "	;
		for (k=i;k>=1; k--)
		  cout<<"5  ";
		
		cout<<endl;
		
	}
	return 0;     
	
}
