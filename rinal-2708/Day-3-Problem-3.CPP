#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    char* a[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    scanf("%d", &n);

    if(n > 9) 
       puts(a[0]);
  
    else 
        puts(a[n]);
    

    return 0;

}
