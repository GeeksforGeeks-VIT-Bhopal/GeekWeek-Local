#include <iostream>
#include <string.h>
 
using namespace std;
 
int main(){
	char password[50]={0};
	int aux_password[50]={0};
	int encrypted_password[50]={0};
	char encrypted_password2[100]={0};
	char final_encryption[100]={0};
	int option;
	cout<<"Type a password to encrypt (0-9,A-Z,a-z): ";
	gets(password);
	cout<<"Select encryption level:"<<endl;
	cout<<"\t1.Simple mode."<<endl;
	cout<<"\t2.Advanced mode."<<endl;
	cin>>option;
	switch (option){
	case 1: 
		cout<<">>Typed password: '";
		for (int i=0;i<strlen(password);i++){
			cout<<password[i];
		}cout<<"' "<<endl;
		cout<<">>Encrypted password: ";
		for(int i=0;i<strlen(password);i++){
			encrypted_password[i]=password[i]+12;
			cout<<encrypted_password[i];
		}cout<<endl;	break;	
	case 2: cout<<">>Typed password: '";
		for (int i=0;i<strlen(password);i++){
			cout<<password[i];
		}cout<<"' "<<endl;
		cout<<">>Encrypted password: ";
		for(int i=0;i<(strlen(password)*2);i++){
			aux_password[i]=password[i]+7;
			encrypted_password2[2*i+1]=aux_password[i];
			encrypted_password2[2*i]=i+189;
			final_encryption[i]=encrypted_password2[i];
			cout<<final_encryption[i];
		}cout<<endl;
		break;	
	}

	system("pause");
	return 0;
}
