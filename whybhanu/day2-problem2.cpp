#include <vector>
#include <string>

bool isInterLeave(string a, string b, string c  )
{
  //we want to reduce the space complexity to O(min(N,M))
  //we swap the two strings if b.length() >a.length(), so that we can make a 
  if(b.length()>a.length())
  {
    swap(a,b);
  }
}
