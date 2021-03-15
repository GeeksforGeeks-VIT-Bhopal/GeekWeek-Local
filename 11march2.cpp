#include<iostream>
using namespace std;
class parent{
protected:
int a;
public:
void showparent(){
    a=9;
cout<<"mai hu parent"<<endl;
}
};
class child1:public parent{
protected:
int b;
public:
void showchild1(){
    b=11;
cout<<"mai hu child1"<<endl<<a+b<<endl;
}
};
class child2:public parent{
protected:
int c;
public:
void showchild2(){
    c=16;
cout<<"mai hu child2"<<endl<<a+c<<endl;
}
};
int main(){
    child1 *h=new child1();
    h->showparent();
    h->showchild1();
    child2 *h1=new child2();
    h1->showparent();
    h1->showchild2();

}