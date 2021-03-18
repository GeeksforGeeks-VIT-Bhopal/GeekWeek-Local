#include<stdio.h>
void main(){
    int n,i=0, r,sum=0,temp;
    printf("please enter the number you want to check for  = ");
    scanf("%d",&n);
    temp=n;
    while (i<n)
    {
        r = n%10;
        sum = sum+(r*r*r);
        n=(n/10);
        

    }
    if (sum==temp){
        printf("number is armstrong.");

    }
    else{
        printf("not armstrong.");
    }
    

}