#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
     int n,val,sum=0; scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&val);sum+=val;
    }
    printf("%i",sum);    
    return 0;}