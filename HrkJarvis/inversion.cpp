#include <iostream>
using namespace std;

long long ans=0;
void merge(int a[],int i,int j)
{
    int ni=((i+j)/2)+1,nj=j+1;
    int s=i;
    int * arr = new int [j-i+1];
    j=ni;
    int k=0;
    while(i<ni && j<nj)
    {
        if(a[i]<=a[j])
        {
            arr[k]=a[i];
            i++;
        }
        else
        {
            arr[k]=a[j];
            ans+=(ni-i);
            j++;
        }
        k++;
    }
    for(;i<ni;i++,k++)
        arr[k]=a[i];
    for(;j<nj;j++,k++)
        arr[k]=a[j];
    for(k=0;s<nj;s++,k++)
        a[s]=arr[k];
    delete [] arr;
}
void m_sort(int a[],int i,int j)
{
    if(i<j)
    {
        m_sort(a,i,(i+j)/2);
        m_sort(a,((i+j)/2)+1,j);
        merge(a,i,j);
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        ans=0;
        scanf("%d",&n);
        int * a = new int[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        m_sort(a,0,n-1);
        cout<<ans<<endl;
    }
    return 0;
}
