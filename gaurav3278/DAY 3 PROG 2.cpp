#import <iostream>
using namespace std;
int main()
{
    int alice_score=0;int bob_score=0;
    int a[3];
    int b[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<3;j++)
    {
        cin>>b[j];
    }
    for(int k=0;k<3;k++)
    {
        if(a[k]>b[k])
        {
           alice_score++; 
        }
        else if(a[k]<b[k])
        {
            bob_score++;
        }
    }
    cout<<alice_score<<" "<<bob_score;
    return 0;
}

