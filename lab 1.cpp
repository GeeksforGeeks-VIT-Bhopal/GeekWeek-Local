#include<iostream>
using namespace std;

class Account {

private:
	int AccNo;
	char name[50], Accty[20];
	int balance;
	int x, y;
public:
	void get_num() {
		cout << "\n Enter the Bank details";
		cout << "\n Enter the customer Name :";
		cin >> name;
		cout << "\n press (1) for Weekly Or (2) for Monthly Or (3) for Quarterly (4) for Annually :";
		cout << "\n Enter the Account Type ";
		cin >> y;
		if (y == 1)
		{
			cout << "\n The Account Type is Weekly";
			cout << "\n Enter the 5 digit Account Number :";
			cin >> AccNo;
			balance = 500;
			cout << "\n The Current Balance is " << balance;
		}
		else if (y == 2)
		{
			cout << "\n The Account Type is Monthly";
			cout << "\n Enter the 5 digit Account Number :";
			cin >> AccNo;
			balance = 1000;
			cout << "\n The Current Balance is " << balance;
		}
		else if (y == 3)
		{
			cout << "\n The Account Type is Quarterly ";
			cout << "\n Enter the 5 digit Account Number :";
			cin >> AccNo;
			balance = 1500;
			cout << "\n The Current Balance is " << balance;
		}
		else
		{
			cout << "\n The Account Type is Annually";
			cout << "\n Enter the 5 digit Account Number :";
			cin >> AccNo;
			balance = 5000;
			cout << "\n The Current Balance is " << balance;
		}

	}
	void get_tans() {
		cout << "\n For deposit press (1) or for withdrawal press (2)  :";
		cin >> x;
		if (x == 1)
		{
			float dep;
			cout << "\n Enter the deposit Ammount :";
			cin >> dep;
			balance += dep;
			cout << "\n The New balance is :" << balance;

		}
		else
		{
			float wit;
			cout << "\n Enter the withdrawal Ammount :";
			cin >> wit;
			if (balance < wit)
			{
				cout << "\n insufficient Balance";
			}
			else
			{
				balance -= wit;
				cout << "\n The Current Balance :" << balance;

			}
		}
	}
};
int main()
{
	int k;
again:
	Account a;
	a.get_num();
	a.get_tans();
	cout << "\n To use Again press (1) Or For New user press (2) else (0) :";
	cin >> k;
	if (k == 1 || k == 2)goto again;

}

