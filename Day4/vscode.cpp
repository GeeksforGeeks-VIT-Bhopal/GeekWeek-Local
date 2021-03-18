#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;
class stock{
    char author[20],title[20],publisher[20];
    double price;
    int amount;
    public:
        stock();
    void insertdata();
    void display();
    int search(char[],char[]);
    void nocopies(int);
};

stock::stock(){
    char *author=new char[50];
    char *title=new char[50];
    char *publisher=new char[50];
    price=0;
    amount=0;
}
void stock::insertdata(){
    std::cout << "\nEnter the name of the book: ";
    std::cin >> title;
    std::cout << "\nEnter the name of author: ";
    std::cin >> author;
    std::cout << "\nEnter the name of the publisher: ";
    std::cin >> publisher;
    std::cout << "\nEnter the Price of the book: ";
    std::cin >> price;
    std::cout << "\nEnter number of available copies: ";
    std::cin >> amount;
}

void stock::display(){
    std::cout << "\nTitle:" << title << "\nAuthor:" << author << "\nPublisher:" 
    << publisher << "\nPrice:" << price << "\nAmount:" << amount;
}

int stock::search(char t[],char a[]){
    if(strcmp(title,t)&&(strcmp(author,a))){
        return 0;
    }
    else{
        return 1;
    }
}

void stock::nocopies(int num){
    if(amount>=num){
        cout << "\nTitle is available." << "\nCost of " << num <<
        "Books is Rs." << (price*num);
    }
    else{
        cout << "\nSorry, will serve later.";
    }
}

int main(){
    int ch,n,i,flag=0,copies,key=0;
    stock b[100];
    char key_title[50],key_author[50];
    do{
        cout << "\n********* Welcome to the book store *********";
        cout << "\n1.Insert details of book\n2.search\n3.exit";
        cout << "\nEnter your choice:";
        cin >> ch;
        switch (ch){
        case 1:
            cout << "\nHow many books data u want to enter";
            cin >> n;
            for(i=0;i<n;i++){
                b[i].insertdata();
            }
            break;
        case 2:
            cout << "\nEnter title of required book: ";
            cin >> key_title;
            cout << "\nEnter author or required book: ";
            cin >> key_author;
            for(i=0;i<n;i++){
                if(b[i].search(key_title,key_author)){
                    flag=1;
                    b[i].display();
                    key=i;
                }
            }  
            if(flag==1){
                cout << "\n\nBook is available";
            }
            else{cout << "\n\nBook Is Not Available";
            break;
            }  
            if(flag==1){
                cout<<"\nPlease enter the required number of copies of the book"; 
                cin>>copies; 
                b[key].nocopies(copies); 
                } 
            break; 
        case 3: 
            exit(EXIT_SUCCESS); 
            break; 
        default: 
            cout<<"\n Wrong Choice"; 
            break; 
        } 
        }while(ch!=5); 
    return 0;
}