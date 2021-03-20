#include <iostream>

using namespace std;

class JudgedScoring{
    int *scores;
    int n;
public:
    JudgedScoring(){
        cin >> n;
        for(int i=0;i<n;i++)
            cin >> scores[i];
    }
    int overallScore();
};

int JudgedScoring::overallScore()
{
    int max=0, min=100, sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=scores[i];
        max=(max>scores[i])?max:scores[i];
        min=(min>scores[i])?min:scores[i];
    }
    return (sum-max-min);
}

int main()
{
    JudgedScoring obj;
    int result = obj.overallScore();

    cout << result;

    return 0;
}