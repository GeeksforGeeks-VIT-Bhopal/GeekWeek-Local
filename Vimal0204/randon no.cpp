#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;

int main()
{   system("cls");

int max,random,i;
for ( i = 0; i <= 7; i++)
{
    srand(time(0));
    random = (rand() % (i+5));
    system("color 08");
    cout<<"\n\nrandom number: "<<random;
}

return 0;
}
