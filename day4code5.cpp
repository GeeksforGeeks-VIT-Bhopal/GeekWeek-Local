class Solution {
public:
    double p;
    double myPow(double x, int n)
    {
        p = pow(x,n);
        return p;
        
    }
    void display()
    {
        cout<<"Value of 4 to the power 4is:"<<p;
    }
};
int main()
{
    Solution s;
    s.myPow(4,4);
    s.display();
    return 0;

}
