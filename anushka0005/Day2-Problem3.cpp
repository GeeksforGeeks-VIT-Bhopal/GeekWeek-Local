/*
    Time complexity: O(1)
    Space complexity: O(1) 

    Where 1 represents the constant .
*/

string toBinaryCalculator(double num)
{
    // Check if the number is Between 0 to 1 or Not
    if (num >= 1 || num <= 0)
        return "ERROR";

    string ans;
    ans.append("0.");

    while (num > 0)
    {

        //writing condition over 32 characters limit
        if (ans.length() >= 32)
            return "ERROR";

        // Multiply num by 2 and  check it if it is greater than 1 or not
        double x = num * 2;
        if (x >= 1)
        {
            ans.append("1");
            num = x - 1;
        }
        else
        {
            ans.append("0");
            num = x;
        }
    }
    return ans;
}
