#include<iostream>
using namespace std;

class arithmetic {
private:
    int a;
    int b;
    float c;
    float d;
    int a_res;
    int s_res;
    float m_res;
    float d_res;
public:
    void get_num()
    {
        cout << "\n Enter two int number for addition and substraction :";
        cin >> a >> b;
        cout << "\n Enter two float number for multiplication and division :";
        cin >> c >> d;
    }
    void calculate()
    {
        a_res = a + b;
        s_res = a - b;
        m_res = c * d;
        d_res = c / d;
    }
    void result()
    {
        cout << "\n The sum of " << a << "+" << b << " is " << a_res;
        cout << "\n The sub of " << a << "-" << b << " is " << s_res;
        cout << "\n The mult of " << c << "*" << d << " is " << m_res;
        cout << "\n The div of " << c << "/" << d << " is " << d_res;
    }
};
int main()
{
    arithmetic a;
    a.get_num();
    a.calculate();
    a.result();
}
