#include<bits/stdc++.h>
using namespace std;

class Frog_jump
{
	public:
		int canmeet(long long x1, long long y1, long long x2, long long y2, long long k1, long long k2)
		{
			long long gd=__gcd(k1,k2);
		    if (abs(x1-x2)%gd!=0 || abs(y1-y2)%gd!=0)
		    {return 0;
			}
		}
};
int main()
{
	Frog_jump obj;
	obj.canmeet(244556,456678,89929,299830,82983,472930);
	return 0;
	
}
