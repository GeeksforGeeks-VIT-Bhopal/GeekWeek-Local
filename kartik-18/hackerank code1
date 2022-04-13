#include<iostream>

using namespace std;
int main(){
    long int arr[5];
    for(int i =0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=1;i<5;i++){
        long int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    long int min = 0,max=0;
    for(int i =0;i<4;i++){
        min+=arr[i];
    }
    for(int i =1;i<5;i++){
        max+=arr[i];
    }
    cout<<min<<" "<<max;
    return 0;
    
}
