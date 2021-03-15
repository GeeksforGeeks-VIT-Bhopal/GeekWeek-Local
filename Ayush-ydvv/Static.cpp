#include <iostream>
using namespace std;
class shared
{
	static int a;
	int b;
	public:
		void set(int i,int j)
		{
			a=i;
			b=j;
		}
		void show();
};
 int shared ::a;
 void shared::show()
 {
 	cout<<"This is static a:"<<a;
 	cout<<"\n this is non static b:"<<b; cout<<"\n";
 }
 
 int main()
 {
 	shared x,y;
 	x.set(1,1);
 	x.show();
 	y.set(2,2);
 	y.show();
 	x.show();
 	return 0;
 	
 }
