#import <iostream>
using namespace std;

int main()
{
    int pos=0;int neg=0;int zero=0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    cout<<pos/(float)n<<endl;
    cout<<neg/(float)n<<endl;
    cout<<zero/(float)n<<endl;
    return 0;
}
