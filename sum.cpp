#include <iostream>
using namespace std;

int getSum(int a[], int n) ;

int main()
 {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        cout << getSum(a, n) << endl;
    
    return 0;
}
int getSum(int a[], int n) 
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
		sum=sum+a[i];
	}
	return (sum);
	
}
