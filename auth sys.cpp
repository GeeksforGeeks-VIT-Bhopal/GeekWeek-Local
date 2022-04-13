#ifndef AUTHSYS_H
#define AUTHSYS_H

#include<iostream>
#include<cstring>

using namespace std;

class AuthSys 
{

    private:

    int i;
    char user[25],pass1[10],pass2[10],email[50];
    char userlog[25],passlog[10];
    char emailver[20],newpass1[10],newpass2[10];
    
    //Registered Password Verification
    
    void IDSetVerify()
      {
         if(strcmp(pass1,pass2)!=0)
	   {
	     cout<<"\n\tError! Password Mismatch...";
             cout<<"\n\tAccount Setup Failed. Please try Again!\n\n";
             IDSet();
	   }
             
	   else
                     
	   {
	     cout<<"\n\tAccount Setup Successful!\n\n";
	   }
      }
    
    //Login Credentials Verification 
    
    void IDLogVerify()
     {
         if(strcmp(userlog,user)!=0||strcmp(passlog,pass1)!=0)
         {
             cout<<"\n\n\tIncorrect Login Credentials!";
             cout<<"\n\tTry Again!\n\n";
             IDLog();            
         }
         else
         {
             cout<<"\n\n\tLogin Successful";
             cout<<"\n\tWelcome "<<user<<" ! \n\n";   
         }
     }
    
    

    public:
        
    //Account Registration 
        
    void IDSet()
      {
         cout<<"\n\n\t\t< ********** REGISTRATION ********** > ";

	 cout<<"\n\n\tEnter Username : ";
	 cin>>user;
         
         cout<<"\n\tEnter Email Address : ";
         cin>>email;
         
	 cout<<"\n\tEnter Password : ";
	 cin>>pass1;

	 cout<<"\n\tEnter Password Again : ";
	 cin>>pass2;
         
         IDSetVerify();
         
      }


     //User Login 
    
     void IDLog()
     {
         cout<<"\n\t< ********** LOGIN ********** >";
         
         cout<<"\n\n\tUsername : ";
         cin>>userlog;
         
         cout<<"\n\tPassword : ";
         cin>>passlog; 
         
         IDLogVerify();
     }


     //Forgot Password 
     
     void IDRst()
	  {
            L113: cout<<"\n\t< ********** PASSWORD RESET ********** >";
                  cout<<"\n\n\tPlease enter you Email ID : ";
                  cin>>emailver;
            
            if(strcmp(emailver,email)!=0)
            {
                cout<<"\n\n\tEmail ID not found...\n\n";
                goto L113;
            }
            else
            {
              L124: cout<<"\n\tUsername : "<<user<<endl;
                    cout<<"\n\tNew Password : ";
                    cin>>newpass1;
                    cout<<"\n\tRe-Enter New Password : ";
                    cin>>newpass2; 
            
            }
            
            if(strcmp(newpass1,newpass2)!=0)
              {
                cout<<"\n\n\tPasswords do not Match...\nPlease Re-Enter...";
                goto L124;
              }
             else
              {
                 strcpy(pass1,newpass1);
                 cout<<"\n\n\tPassword Reset Successful!";
                 cout<<"\n\n\tUpdated Login Credentials ";
                 cout<<"\n\n\tUsername : "<<user<<"\n\tEmail : "<<email<<"\n\tPassword : "<<pass1;
              }      
           }

	  
};

#endif /* AUTHSYS_H */






int main()
{
    int n;
    char opt;
    
    AuthSys A1;
  
    L23: cout<<"\n\n\t\t\tWELCOME TO AUTHENTICATION SYSTEM";
    
         cout<<"\n\n\t[1]\tREGISTER ID";
         cout<<"\n\t[2]\tLOGIN";
         cout<<"\n\t[3]\tFORGOT PASSWORD";
         cout<<"\n\t[4]\tEXIT";
    
         cout<<"\n\n\tSelect : ";
         cin>>n;
    
    switch(n)
    {
        case 1:  A1.IDSet();
                 cout<<"\n\nContinue (Y/N): ";
                 cin>>opt;
                 if(opt=='Y'||opt=='y')
                  {
                    goto L23; 
                    break;
                  }
                 else
                  {
                    cout<<"\n\n\tThank You! For using Authentication System ";
                    exit;
                  }
        
        
        
        case 2: A1.IDLog();
                 cout<<"\n\nContinue (Y/N): ";
                 cin>>opt;
                 if(opt=='Y'||opt=='y')
                  {
                    goto L23; 
                    break;
                  }
                 else
                  {
                    cout<<"\n\n\tThank You! For using Authentication System ";
                    exit;
                  }
        
        case 3: A1.IDRst();
                cout<<"\n\nContinue (Y/N): ";
                cin>>opt;
                 if(opt=='Y'||opt=='y')
                  {
                    goto L23; 
                    break;
                  }
                 else 
                  {
                    cout<<"\n\n\tThank You! For using Authentication System ";
                    exit;
                  }
        case 4:
				exit(0);          
        default:
                  cout<<"\n\tIncorrect Choice!";
                  cout<<"\n\n\tContinue (Y/N): ";
                  cin>>opt;
                  if(opt=='Y'||opt=='y')
                    {
                      goto L23; 
                      break;
                    }
                 else
                  {
                    cout<<"\n\n\tThank You! For using Authentication System ";
                    exit;
                  }
    }
    
    
}

