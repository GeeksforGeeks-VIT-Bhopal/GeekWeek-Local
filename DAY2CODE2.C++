#include <stdio.h>
#include <string>
#include <iostream>

void quickSort(std::string &str, int left, int right) {
          int i = left, j = right;
          int mid = str[(left + right) / 2];


          while (i <= j) {
                while (str[i] < mid)
                      i++;
                while (str[j] > mid)
                      j--;
                if (i <= j) {
                      std::swap(str[i], str[j]);
                      i++; j--;
                }
          };


          if (left < j)
                quickSort(str, left, j);
          if (i < right)
                quickSort(str, i, right);
    }

int main()
{
    std::string str;
    std::cin >> str;
    quickSort(str, 0, str.size()-1);
    std::cout << str;
}
