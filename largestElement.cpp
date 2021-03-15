#include<iostream>
using namespace std;
int main(){
    //Initializing the Array
    int n;
    int arr[5];
    cout<<"Enter the Number of elements to be entered in Array :"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i])
        max=arr[i];
    }
    cout<<"The Largest Element : "<<max<<endl;
}