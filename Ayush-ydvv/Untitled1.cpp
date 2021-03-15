#include<iostream>
using namespace std;
int main()
{
	int r=10;
	int a=10 , b=20, c=40;
	int x=30 , y=50;
	cout<<"area of circle ="<<float area( int r);
	cout<<"area of triangle="<<float area(int a, int b, int c);
	cout<<"area of rectangle"<<float area(int a, int b);
	
	return 0;
}

float area( int r)
{
	float k;
	k=3.14*r*r
	return k;
}
float area(int a , int b , int c)
{
 	float s,k;
 	s=(a+b+c/2)
 	k= (s*(s-a)*(s-b)*(s-c))**0.5
 	return k;
}
float area(int a , int b)
{
	int k;
	k=a*b
	return k;
}
	
