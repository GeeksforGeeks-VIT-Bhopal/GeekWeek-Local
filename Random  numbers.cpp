#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
unsigned int x,r,i;
printf("no of random no you want to generate ");
scanf("%d",&x);
printf("put the range of random no ");
scanf("%d",&r);
unsigned int *a=(unsigned int*)malloc(sizeof(unsigned int)*x);
for(i=0;i<x;i++)
printf("%d ",(a[i]%r)+1);   
free(a);
getch();
return 0;
}
