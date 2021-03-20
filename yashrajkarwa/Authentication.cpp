//Authentication program
//(id,Pass)->(hello,truth),(death,evil),(1234,4321)

#include<iostream>
#include<fstream>

using namespace std;

class details{
protected:
    string id;
    string pass;
public:
    friend void start_auth();
};

void start_auth(){
    fstream auth;
    string ch;
    int n=0, i, j;
    details *a = new details[1024];;

    auth.open("D://DriveE/Program_files/Microsoft VS Code/projectsAuthenticationfile.txt",ios::in);
    if(!auth){
        cout << "error in opening file"<< endl;
        exit(0);
    }
    while(!auth.eof())
    {
        n++;
        auth >> ch;
        a[n].id = ch;
        auth >> ch;
        a[n].pass = ch;
    }



    string name, password;


    cout<< "Name/ID:  ";
    cin >> name;
    cout<< "Password:  ";
    cin >> password;
    cout<<endl;

    for(j=0; j<=n; j++){
        if(name==a[j].id){
            if(password==a[j].pass){
                    cout<<"LOGIN PERMITTED"<<endl;
                    break;
            }
            else if(password!=a[j].pass){
                cout<<"ACCESS DENIED// Info Doesn't match"<<endl;
                break;
            }
        }
    }
    if(j==n+1)
    {
        cout<<"ACCESS DENIED// Info Not Present"<<endl;
    }

}

int main()
{
    start_auth();

    return 0;
}
