#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int n = 0;
    int min = 0;
    int max = 0;
    int mid = 0;
    int search = 0;
    cout << "Enter the number of Elements to be entered in Array : " << endl;
    cin >> n;
    cout << "Enter " << n << " Elements :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the Element to Search :" << endl;
    cin >> search;
    char c;
    cout << "Is the array sorted ? (y/n)" << endl;
    cin >> c;
    if (c == 'n' || c == 'N')
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    arr[j] = arr[j] + arr[j + 1];
                    arr[j + 1] = arr[j] - arr[j + 1];
                    arr[j] = arr[j] - arr[j + 1];
                }
            }
        }
    }
    cout << "The Sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    max = n - 1;
    mid = (min + max) / 2;
    while (min <= max)
    {
        if (arr[mid] == search)
        {
            cout << "Element found at " << mid + 1 << " position." << endl;
            break;
        }
        if (search < arr[mid])
            max = mid - 1;
        else
            min = mid + 1;
    }
    return 0;
}