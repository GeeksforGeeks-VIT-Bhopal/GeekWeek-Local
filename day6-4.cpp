#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the size of the array"<<endl;
    int size;
    cin>>size;
    cout<<"enter the elements"<<endl;
    int *array=new int(size);
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    if((size%2)==0)
    {
        int c;
        for(int j=0;j<(size/2);j++)
        {
            c=array[size-(j+1)];
            array[size-(j+1)]=array[j];
            array[j]=c;
        }
        cout<<"the reversed array is as:"<<endl;
        for(int m=0;m<size;m++)
        {
            cout<<array[m];
        }
    }
    else
    {
        int c;
        for(int k=0;k<(size/2);k++)
        {
            c=array[size-(k+1)];
            array[size-(k+1)]=array[k];
            array[k]=c;   
		}
        cout<<"the reversed array is as:"<<endl;
        for(int l=0;l<size;l++)
        {
            cout<<array[l];
        }
    }
}
