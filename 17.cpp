/*
1 1 1 1 1
1       1
1       1
1       1
1 1 1 1 1    */


# include <iostream>
using namespace std;

int main()
{
	for (int i=1;i<=5;i++)
	   {
	   for (int j=1;j<=5;j++)
	     
		{
	      if (j==1 || j==5 || i==1 ||i==5)
	       cout<<"1"<<" ";
	    else 
	        cout<<"  ";}
	    cout<<endl;}
	return 0;
}


