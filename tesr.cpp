//20BCE10388
#include<iostream>
#include<string>
#include<limits>
using namespace std;
class stock
{
string author;
string title;
string pub;
double price;
int numcopies;
public:
//contructor to give initial values to variable
stock();
//function to take book name and check whether book is present in library or not
int access_title(string a);
//function to enter the details of the book present in library
void input();
//function to get the price of the required copies
void getdata(int);
};
stock::stock()
{
author="none";
title="none";
pub="none";
price=0;
numcopies=0;
}
int stock::access_title(string a)
{
//checking whether is book is present or not
if(title.compare(a)==0)
return 0;
else
return 1;
}
void stock::getdata(int num)
{
//checking if no. of copies asked by the customer avaiable or not
//if available displaying the price for the copies
if(numcopies>=num)
cout<<"\nCost of "<<num<<" books is Rs. "<<(price*num);
else
cout<<"\nSorry! These many copies are unavailable!";
}
void stock::input()
{
//Taking all the details of a book
cout<<"Title: "<<endl;
getline(cin,title);
cout<<"Author: "<<endl;
getline(cin,author);
cout<<"Publisher: "<<endl;
getline(cin,pub);
cout<<"Prices: "<<endl;
cin>>price;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
cout<<"Copies available: "<<endl;
cin>>numcopies;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
}
//Driver code
int main()
{
stock obj[2]; //Array of object of class
int n;
string t;
cout<<"Enter details of 2 books"<<endl;
cout<<"-------------------------------------------------------------------------"<<endl;
//loop to enter book details in library database
for(int i=0;i<2;++i)
{
obj[i].input();
cout<<"-------------------------------------------------------------------------"<<endl;
}
cout<<"Enter title of required book: "<<endl;
getline(cin, t); //taking name of book demanded by the customer
int j=0;
for(int j=0;j<2;j++)
{
if(obj[j].access_title(t)==0)
{
cout<<"How many copies? "<<endl;
cin>>n;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
obj[j].getdata(n);
break;
}
}
if(j==2)
cout<<"\nBook Not Available";
return 0;
}