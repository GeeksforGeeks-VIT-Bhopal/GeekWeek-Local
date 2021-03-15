#include<iostream>
using namespace std;
class rectangle
{
	int width, length;
	public:
		rectangle(){
		    cout<<"enter width:";
			cin>>width;
			cout<<"enter length:";
			cin>>length;
			cout<<"area is:"<<width*length;
		}
};

int main()
{
	rectangle r1;
	
	
	return 0;
}
