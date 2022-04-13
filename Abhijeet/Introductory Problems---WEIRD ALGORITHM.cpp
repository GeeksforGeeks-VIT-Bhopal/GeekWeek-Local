/*  CSES problem set 
    Introductory problems
    WEIRD ALGORITHM
*/
#include<iostream>
using namespace std;

int main()
{
	long n;
	cin>>n;
	while(n!=1)
	{
		cout<<n<<" ";
		if(n%2==0)
		n=n/2;
		else
		n=n*3+1;
	}
	cout<<"1"<<" ";
}
