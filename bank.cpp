#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class account{
    public:
    char name[30];
    long long acc_type,acc_num;
    long long balance;
    long long amount;

    void details_of_customer(){
        cout<<"please enter your name - ";
        cin>>name;
        cout<<"\nSir, please enter your account number - ";
        cin>>acc_num;
        cout<<"\n******What is your account type******\n1- Current account.\n2- Saving account.\n";
        cin>>acc_type;
        cout<<"\nEnter the amount in your account - ";
        cin>>balance;
    }

    void display_balance(){
        cout<<"\nYour account balance is= "<<balance<<"INR";
    }

    void withdraw_balance(){
        cout<<"\nEnter amount you want to withdraw - ";
        cin>>amount;
        if(amount>balance){
            cout<<"\nINSUFFIENT BALANCE!!!";
        }
        else{
            balance=balance-amount;
        }

        display_balance();
    }
};


class current:public account{

    public:
    void charge(){
        if (balance<500 && acc_type==1)
        {
            balance=balance-50;
        }
        display_balance();
        
    }
};

class saving:public account{
    int interest(){
        int time;
        cout<<"\nEnter the time interval (in years) = ";
        cin>>time;
        balance = balance*(1 + 2*time);
        display_balance();
        return 0;
    }
};

int main(){
    system ("CLS");
    account A;
    A.details_of_customer();
    A.display_balance();
    A.withdraw_balance();
    getch();
    return 0;
}
