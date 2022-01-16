#include<iostream>
using namespace std;
class Solution {
public:
    int res;
    void divide(int dividend, int divisor)
    {
         res = dividend/divisor;
    }
    void display()
    {
        cout<<"Output:"<<res<<endl;
    }
};
int main()
{
    Solution obj,obj1;
    obj.divide(10,3);
    obj1.divide(7,3);
    obj.display();
    obj1.display();
    return 0;
}
