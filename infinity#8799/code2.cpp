long long int countStrings(long long int n)
{
   return (1 + n + (n*(n-1))+ n + (n*(n-1)/2) +(n*(n-1)*(n-2)/2)) %1000000007;
}
