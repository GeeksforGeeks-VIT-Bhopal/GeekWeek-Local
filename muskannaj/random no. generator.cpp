


RANDOM CODE GENERator 

#include<iostream>
#include<cstdlib>
using namespace std;
main() {
   int max;
   max = 100; //set the upper bound to generate the random number
   srand(time(0));
   cout << "The random number is: "<<rand()%max;
}

