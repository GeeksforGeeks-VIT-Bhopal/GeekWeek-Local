#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand((unsigned) time(0));
  int randomNumber = rand();
  cout << randomNumber << endl;
}