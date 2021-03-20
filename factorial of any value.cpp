#include<iostream>
using namespace std;
main()
{int i,num ,fact=1;
cout<<"enter integer";
cin>>num;
i=num;
while(num)
{fact*=num;
         --num;
}
cout<<"factorial of"<<i;
cout<<fact;

}
