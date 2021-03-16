#include<iostream>

using namespace std;

class abc
{
	
    public:
    int power(int x, unsigned int y)
            {
            	if (y == 0)
		            return 1;
	            else if (y % 2 == 0)
	            	return power(x, y / 2) * power(x, y / 2);
            	else
	            	return x * power(x, y / 2) * power(x, y / 2);
            }

    
};

int main()
{
	abc g;
	int x = 2;
	unsigned int y = 3;

	cout << g.power(x, y);
	return 0;
}


