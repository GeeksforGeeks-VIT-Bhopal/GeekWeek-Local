#include <iostream>
using namespace std;



class XYZ;
class ABC {
    
  
        
    private:
        int numA;
        
    public:
        void setData(){
        	cout<<"enter any number:";
            cin>>numA;
        }
    friend int add(ABC, XYZ);
};

class XYZ {

    
    
    private:
        int numB;
    public:
        void setData(){
            cout<<"enter second number:";
            cin>>numB;
        }
 
      
    friend int add(ABC, XYZ);
};


int add(ABC s1, XYZ s2) {
    return (s1.numA + s2.numB);
}

int main() {
    ABC s1;
    XYZ s2;
    s1.setData();
    s2.setData();
    cout << "Sum: " << add(s1, s2);
    return 0;
}
