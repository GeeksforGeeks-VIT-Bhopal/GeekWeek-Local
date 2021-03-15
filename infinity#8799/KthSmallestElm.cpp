//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int *, int, int, int);
 
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        cout<<kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}// } Driver Code Ends


//User function template for C++

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
const int N = 100001;
int kthSmallest(int arr[], int l, int r, int k) {

    bool a[N] = {false};
    
    for(int i = l; i<= r; i++)
    {
        a[arr[i]] = true;
    }
    int ind ;
    for(ind = 0; ind <N; ind++)
    {
        if(a[ind] == true)
            k--;
        if(k ==0)
            break;
    }
    return ind;
    
    
}
  
