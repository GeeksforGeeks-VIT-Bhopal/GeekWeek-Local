#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter list elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n - 1; i++)         //pick a list item from starting
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }                           //if in the remaining array there is an item smaller than the chosen item, swap them
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

        for (int k = 0; k < n; k++)     //this loop is just to display each iteration
        {
            cout<<arr[k]<<" ";
        }
        cout<<"\n";
    } 

    cout<<"The sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

