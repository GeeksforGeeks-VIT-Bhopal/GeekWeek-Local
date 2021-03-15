#include<iostream>
using namespace std;
// Bubble sort
int main()
{
  int a[]={5,8,4,6,1};
  int n= sizeof(a)/sizeof(a[0]);  
  int x;
  int i,j; 
  cout<<n<<endl;
  cout<<"please insert the number to find:";
  cin>>x;
  for(i=0;i<n;i++)
    {
      if(a[i]==x)
      {
        j=i;
        cout<<"number you are searching for present at index "<<j<<endl;
      }
      else
      {
        cout<<"number not found!!";
      break;
      }
    }
}
