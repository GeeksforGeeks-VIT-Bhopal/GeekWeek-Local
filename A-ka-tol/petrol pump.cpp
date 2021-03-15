//programme is used to show quantity and price of petrol
using namespace std;
# include <iostream>

 class petrol
{public:
	int money;
	int density;
	string choice;
	int p =70 ; 
   	petrol(){
   	   int p = 70;
   	   cout<<"\n welcome to our petrol pump"<<endl;
		  	cout<<"price of petrol today is:"<<p<<"Rs/liter"<<endl; 
			  }
	cout<<"what ingormation money or quantity";
	cin>>choice;
if(choice="money"){

	
public:
	void getmoney(){
		cout<<"\n enter value of petrol you want:";
		cin>>money;
	}
	int showquantity(){
		int density = money / p;
			cout <<"\n quantity of petrol in liters:"<< density <<endl;
			}
			  	 }
else{

	void getquantity(){
		cout<<"\n enter the quantity of petuol :";
		cin>>density;
	}
	int showmoney(){
		int rupees=density *p;
		cout<<"/n petrol will cost you:"<<rupees;
	 				}
	}

};
int main(){
	petrol e;
	e.getmoney();
	e.showquantity();
	e.getquantity();
	e.showmoney();
	return 0;

}
 

