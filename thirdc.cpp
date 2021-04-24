#include<iostream>
using namespace std;
int main()
{
    int size, sum=0;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    int *array=new int(size);
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
        sum=sum+array[i];
    }
    cout<<"the sum of the array elements is as:"<<sum;
    
}
