#include<stdio.h>
#include<string.h>>
int main()
{
 char password[20];
 int i, len=0;

 printf("Enter your password:");
 scanf("%s",password);

 len = strlen(password);
 printf("Your encrypted password is: ");

 for(i=0; i<len; i++)
  printf("%c",password[i]+3); 

 return 0;
}
