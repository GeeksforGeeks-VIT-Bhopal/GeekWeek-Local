#include<iostream>
using namespace std;

class parent1{
    protected:
    int a;
    public:
    void showparent1(int x){
        a=x;
    cout<<"parent1"<<endl;
    }
};
class parent2{
    protected:
    int b;
    public:
    void showparent2(int y){
        b=y;
    cout<<"parent2"<<endl;
    }
};
class child:public parent1,public parent2{
    int c;
    public:
    void showchild(int z){
        c=z;
    cout<<"child"<<a+b<<endl;
}
};
int main(){
    child *k=new child();
    k->showparent1(4);
    k->showparent2(7);
    k->showchild(8);
}