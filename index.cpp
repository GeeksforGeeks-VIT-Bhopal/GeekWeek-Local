#include <iostream>
using namespace std;

int findElementAtIndex(int a[], int n, int key) ;

int main() 
{
    int n, key;
    cin >> n >> key;
    int a[n];
    for (int i = 0; i < n; i++)
		 cin >> a[i];
		 
    cout << findElementAtIndex(a, n, key) << endl;
    
	return 0;
}
int findElementAtIndex(int a[], int n, int key) 
{   int i;
    for(i=0;i<n;i++)
    {
        if(i==key)
        break;
    }
    return(a[i]);
}
