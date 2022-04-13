#include<iostream>
int main()
{
    int n;
    std::cin>>n;
    int arr[n];
    for(int j=0;j<n;j++)
    {
        std::cin >> arr[j];
    }
    int start=0,end=n-1;
    int key;
    std::cout<<"key: \n";
    std::cin >> key;
    bool flag=0;
    while(flag==0)
    {
        int mid = (start+end)/2;
        int midValue=arr[mid]; 
        if (midValue==key)
        {
            std::cout<<"found";
            flag=1;
            break;
        }
        else if (midValue>key)
        {
            end=mid-1;    
        }
        else 
        {
            start=mid+1;
        }
    }
    if (flag==0)
    {
        std::cout<<"not found";
    }
}
