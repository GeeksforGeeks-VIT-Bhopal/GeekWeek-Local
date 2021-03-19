#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class ABBA {
public:
	string canObtain(string, string);
};

string ABBA::canObtain(string s, string t) {
	while (s.length() < t.length()) {
		int sz = t.length();
		if (t[sz - 1] == 'B') {
			t = t.substr(0, sz - 1);
			string reverse(t.begin(), t.end());
		} else {
			t = t.substr(0, sz - 1);
		}
	}
	return (s == t) ? "Possible" : "Impossible";
}
