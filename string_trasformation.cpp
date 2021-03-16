
#include<string>
#include<math.h>
using namespace std;

std::string getTransformedString(std::string str, int k)
{
    std::string answer;
    while(str.length()>0)
    {
        char smallestcharacter=str[0];
        int smallestcharacterposition=0;
        
        for(int i=0;i<min(k,(int)str.length());i++)
        {
            if(str[i]<smallestcharacter)
            {
                smallestcharacter=str[i];
                smallestcharacterposition=i;
            }
        }
        answer+=smallestcharacter;
        
        str.erase(str.begin()+smallestcharacterposition);
    }
    return answer;
}
