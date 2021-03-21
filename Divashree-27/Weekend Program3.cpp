#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

class BadLengthException{
    public:
    int x;
    BadLengthException(int n) {
        x=n;
    }
     int what() const throw()
  {
    return x;
  }
};
