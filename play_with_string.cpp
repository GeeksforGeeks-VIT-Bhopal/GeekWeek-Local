#include<string>
using namespace std;

string convertString(string str) 
{
    bool flag = true;
    for (int i = 0; i < str.size(); i++) 
    {
            if (flag == true && islower(str[i])) {
                str[i] = toupper(str[i]);
            }
            if (str[i] ==' ') 
            {
                flag = true;
            }
            else 
            {
                flag = false;
            }
        }

        return str;
}


