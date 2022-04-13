#include<iostream>
using namespace std;


class student
{
   int stu_roll_no;
   string stu_name;
   string stu_address;
   public:
    student()
	{ 
    stu_name="Ayush";
    stu_roll_no=21;
    stu_address="905/3 AFS";
    cout<<"value in default constructor:"<<endl;
    cout<<"stu_name="<<stu_name<<endl;
    cout<<"stu_address="<<stu_address<<endl;
    cout<<"stu_roll_no="<<stu_roll_no<<endl;
}

   student(int x , string y, string z)
   {
    stu_roll_no = x;
    stu_name = y;
    stu_address=z;
    cout<<"values in parameterised const.:"<<endl;
    cout<<"stu_roll_no"<<x<<endl;
    cout<<"stu_name="<<y<<endl;
    cout<<"stu_address="<<z<<endl;
}

   student(student &s)
   { 
     stu_name = s.stu_name;
stu_address= s.stu_address;
stu_roll_no=s.stu_roll_no;
cout<<"values when copied:"<<endl;
cout<<"stu_name="<<stu_name<<endl;
cout<<"stu_roll_no="<<stu_roll_no<<endl;
cout<<"stu_address="<<stu_address;

}
};

int main()
{
	int x;
	string y;
	string z;
	cout<<"enter name of student:";
	cin>>y;
	cout<<"enter roll no:";
	cin>>x;
	cout<<"enter address:";
	cin>>z;
student s1;
student s2(x,y,z);
student s3(x,y,z);
student s4(s3);
student s5(s2); 
return 0;
}

