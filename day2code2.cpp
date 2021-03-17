#include<iostream>
using namespace std;
int main()
{
    int size, largest, smallest,choice;
   cout<<"enter the size of the array"<<endl;
    cin>>size;
    int *array=new int(size);
    cout<<"enter the elements"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"enter the choice"<<endl;
    cout<<"1. find the largest element"<<endl;
    cout<<"2. find the smallest element"<<endl;
    cin>>choice;
    if(choice==1)
    {
        largest=array[0];
        for(int j=0;j<size;j++)
        {
            if(largest<array[j])
            {
                largest=array[j];
            }
        }
        cout<<"the largest element is as:"<<largest;
    }
    else
    {
        smallest=array[0];
        for(int k=0;k<size;k++)
           {
            if(smallest>array[k])
            {
                smallest=array[k];
            }
        }
        cout<<"the smallest element is as:"<<smallest;
    }
    
}
