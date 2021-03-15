#include <bits/stdc++.h> 
using namespace std; 

void findTotalSum(vector<string>& ops) 
{ 

	if (ops.empty()) { 
		cout << 0; 
		return; 
	} 

	stack<int> pts; 
	int ans = 0; 
	for (int i = 0; i < ops.size(); i++) { 

		if (ops[i] == "C") { 

			ans -= pts.top(); 
			pts.pop(); 
		} 
		else if (ops[i] == "D") { 

			pts.push(pts.top() * 2); 
			ans += pts.top(); 
		} 
		else if (ops[i] == "+") { 

			int a = pts.top(); 
			pts.pop(); 
			int b = pts.top(); 
			pts.push(a); 
			ans += (a + b); 
			pts.push(a + b); 
		} 
		else { 
			int n = stoi(ops[i]); 
			ans += n; 
			pts.push(n); 
		} 
	} 
	cout << ans; 
} 
int main() 
{ 
	vector<string> arr = { "4", "-2", "S", "E", "*" }; 
	findTotalSum(arr); 

	return 0; 
}
