#include <iostream>
using namespace std;
#include <cstring>

class bankACNT{
    private:
        string name;
        int account_number;
        string acc_type;
        double balance_amount;

    public:
        void initVal(){
            cout<<"enter the name of account holder--   ";
            cin>>name;
            cout<<"enter the account number--   ";
            cin>>account_number;
            cout<<"enter the account type--   ";
            cin>>acc_type;
            cout<<"enter the initial balance amount--  ";
            cin>>balance_amount;
        }

        void depAmount(){
            double a;
            cout<<"enter the amount you want to deposit in the account--   ";
            cin>>a;
            balance_amount = balance_amount + a;
        }

        void withdrawAmount(){
            double b;
            cout<<"enter the amount you want to withdraw from the account--   ";
            cin>>b;
            balance_amount = balance_amount - b;
        }

        void checkBalance(){
            cout<<"your current balance is--   "<<balance_amount<<endl;
        }

        void dispInfo(){
            cout<<"your account number is--   "<<account_number<<endl;
            cout<<"your current balance is--  "<<balance_amount<<endl;
        }
};
int main()
{
    bankACNT obj;

    obj.initVal();
    cout<<endl;

    obj.dispInfo();
    cout<<endl;

    obj.withdrawAmount();
    cout<<endl;

    obj.depAmount();
    cout<<endl;

    obj.checkBalance();
    cout<<endl;

    return 0;
}
