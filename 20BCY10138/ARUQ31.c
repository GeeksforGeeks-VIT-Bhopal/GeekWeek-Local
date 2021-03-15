#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void randinput(int x[200])
{
	int i = 0;
	for(; i < 200; i++)
	{
		x[i] = rand();
		x[i] = x[i]%10;
		x[i] = x[i]/2;
		printf("%d ", x[i]);
	}
}
void main()
{

	int s1 = 0, s2 = 0, i;
	int group1[200], group2[200];
	randinput(group1);
	randinput(group2);
	for(i = 0; i < 200; i++)
		s1 += group1[i];
	for(i = 0; i < 200; i++)
		s2 += group2[i];
	if(s1 > s2)
		printf("Group 1 is more satisfied");
	else if(s2 > s1)
		printf("Group 2 is more satisfied");
	else
		printf("Both groups are equally satisfied.");
	getch();
}