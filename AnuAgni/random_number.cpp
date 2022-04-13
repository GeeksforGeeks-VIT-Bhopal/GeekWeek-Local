

#include <iostream>

using namespace std;

void ranDOM(int arr[],int n)
{
    int s=0;
    if(n%2==0)
       {
           for(int i=0;i<n;i++)
           {
               if(i%2==0)
               {
                  s=s+i; 
               }
           }
         
             cout<<"no. "<<arr[s-(n-2)];
       }
     else
      { 
         for(int i=0;i<n;i++)
           {
               if(i%2==0)
               {
                  s=s+i; 
               }
           }
         
             cout<<"no. "<<arr[s-(n-1)]; 
          
      }
   
   
}
int main() {
    int n;
    cout << "how many no you want to enter?\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter "<<i+1<<"st no\n";
        cin>>arr[i];
    }
   ranDOM(arr,n);
    return 0;
}
