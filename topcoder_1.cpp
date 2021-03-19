// CPP program to count 3 digits after a decimal
#include <bits/stdc++.h>
using namespace std;

int count(int x, int y)
{
	int ans = 0; 
	
	unordered_map<int, int> m;
	
	while (x % y != 0) {
		x = x % y;
		ans++;

		if (m.find(x) != m.end()) 
			return -1;

		m[x] = 1;
		x = x * 10;
	}
	return ans;
}

int main()
{
	int res = count(3, 6);
	(res == -1)? cout << "INF" : cout << res;

	cout << endl;
	res = count(100, 5);
	(res == -1)? cout << "INF" : cout << res;

	cout << endl;
	res = count(300, 15);
	(res == -1)? cout << "INF" : cout << res;
	return 0;
}
