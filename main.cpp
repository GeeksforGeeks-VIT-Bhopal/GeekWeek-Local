// Program to check whether the number is even number or not
#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "The number is an even number" << endl;
    }
    else
    {
        cout << "The number is an odd number" << endl;
    }
    return 0;
}