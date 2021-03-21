#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;

unsigned int MyRand(unsigned int start_range,unsigned int end_range){
    static unsigned int rand = 0xACE1U;
    if(start_range == end_range) {
        return start_range;
    }
    rand += 0x3AD;
    rand %= end_range;
    while(rand < start_range){
        rand = rand + end_range - start_range;
    }
    return rand;
  }
int main(void){
    int i;
    int start,stop;
    cout << "Write start range:";
    cin >> start;
    cout << "Write stop range: ";
    cin >> stop;
    for (i = 0; i < 3; i++){
    printf("%d\n",MyRand(start,stop));
    }
    return 0;
}