#include <iostream>
using namespace std;
int find_Second_Smallest(int array_num[], int n) {
  int smallest_num, second_smallest_num;
  if (array_num[0] < array_num[1]) {
    smallest_num = array_num[0];
    second_smallest_num = array_num[1];
  } else {
    smallest_num = array_num[1];
    second_smallest_num = array_num[0];
  }
  for (int i = 0; i < n; i++) {
    if (smallest_num > array_num[i]) {
      second_smallest_num = smallest_num;
      smallest_num = array_num[i];
    } else if (array_num[i] < second_smallest_num) {
      second_smallest_num = array_num[i];
    }
  }
  return second_smallest_num;
}

int main() {
  int n = 7;
  int array_num[7] = {
    5,
    6,
    7,
    2,
    3,
    4,
    12
  };
  int s = sizeof(array_num) / sizeof(array_num[0]);
    cout << "Original array: ";
    for (int i=0; i < s; i++) 
    cout << array_num[i] <<" ";

  int second_smallest_num = find_Second_Smallest(array_num, n);
  cout<<"\nSecond smallest number: "<<second_smallest_num;
  return 0;
}
