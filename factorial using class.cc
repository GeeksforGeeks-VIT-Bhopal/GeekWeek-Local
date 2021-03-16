#include <iostream>
using namespace std;

class factorial {
private:
    int n;
    int f;
public:
    void get_n() {
        cout << "Enter The n:";
        cin >> n;

    }
    void calculate_fact() {
        f = 1;
        for (int i = 1;i <= n;i++)
            f *= i;
    }
    void put_f() {
        cout << "factorial " << n << " is :" << f;

    }

};
int main() {
    factorial f;
    f.get_n();
    f.calculate_fact();
    f.put_f();
}
