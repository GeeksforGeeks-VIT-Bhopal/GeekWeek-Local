#include<iostream>
int main ()
{
    int n;
    std::cin >> n;
    int arr[n];
    for (int i =0;i<n;i++)
    {
        std::cin>>arr[i];
    }
    int key;
    std::cout<<"Search key: \n";
    std::cin>>key;
    bool flag=0;
    for(int j=0;j<n;j++)
    {
       if (key == arr[j])
       {
           std::cout << "found at position " << j+1;
           flag=1;
           break;
       }
    }
    if (flag == 0)
    {
        std::cout << "not found";
    }

}
