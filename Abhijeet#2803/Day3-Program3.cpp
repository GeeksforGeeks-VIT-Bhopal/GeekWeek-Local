#include<iostream>
using namespace std;

int main()
{
    int n;int d;
    cin>>n;
    cin>>d;

    int a[n];

    for(int i=0;i<n;i++)
    cin>>a[i];

   for(int i=0;i<d;i++)
   {
    int temp=a[0];

    for(int j=0;j<n;j++)
    a[j]=a[j+1];

    a[n-1]=temp;
   }

   for(int i=0;i<n;i++)
   cout<<a[i]<<" ";

   return 0;
}

/*                                       Array Left Rotation

A left rotation operation on an array shifts each of the array's elements  unit to the left. For example, if  left rotations are performed on array , then the array would become . Note that the lowest index item moves to the highest index in a rotation. This is called a circular array.

Given an array  of  integers and a number, , perform  left rotations on the array. Return the updated array to be printed as a single line of space-separated integers.

Function Description

Complete the function rotLeft in the editor below.

rotLeft has the following parameter(s):

int a[n]: the array to rotate
int d: the number of rotations
Returns

int a'[n]: the rotated array
Input Format

The first line contains two space-separated integers  and , the size of  and the number of left rotations.
The second line contains  space-separated integers, each an .

Constraints

Sample Input

5 4
1 2 3 4 5
Sample Output

5 1 2 3 4
Explanation

When we perform  left rotations, the array undergoes the following sequence of changes:

*/