#include<iostream>
using namespace std;
class ASCIISum
{
	public:
		long sum;
		int total(long N)
		{
			int i; 
			for(i=1;i<N;i++)
			{ sum = sum+(48+i);
			}
		}
		void display()
		{
			cout<<"Sum of the digits of the number in ASCII form is:"<<sum;
		}
};
int main()
{
	ASCIISum obj;
	obj.total(4568734);
	obj.display();
	return 0;
}

