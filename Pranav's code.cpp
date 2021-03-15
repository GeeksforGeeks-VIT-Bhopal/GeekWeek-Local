#include<iostream>
using namespace std;

int main()
{
    int a[5] = {1,2,3,4,5};

    for(int x:a){
        for(int i = 0; i<x; i++){
            cout<<"geeks for geeks"<<endl;
        }
    }
}