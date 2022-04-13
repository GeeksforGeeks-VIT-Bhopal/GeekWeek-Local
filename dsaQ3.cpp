#include<iostream>
int main ()
{
    int n;
    std::cout << "Enter length: ";
    std::cin >> n;
    int a[n];
    for(int k=0;k<n;k++)
    {
        std::cin >> a[k];
    }
    for (int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        { 
           if (a[i]>a[j])
           {
               int tmp=a[i];
               a[i]=a[j];
               a[j]=tmp; 
           }
        }
    }
    for(int m=0;m<n;m++)
    {
        std::cout<<a[m]<<" ";
    }
}
