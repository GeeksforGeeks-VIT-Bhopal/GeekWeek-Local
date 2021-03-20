/*(a) Write a program to print all prime numbers from 1 to 300. (Hint:
Use nested loops, break and continue)*/
#include<stdio.h>
int main(){
    int i;
    int num;
    for(num=2;num<=300;num++)
    {
             for ( i = 2; i<=num-1; i++)
             {
              if (num%i==0)
               break;
             }
             if (i==num)
             {
               printf("%d\n",num);
             }
        continue;  
    }
    
    return 0;
}