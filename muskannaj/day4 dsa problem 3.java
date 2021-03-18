



// C# implementation of the above approach
using System; 
using System.Collections; 
using System.Collections.Generic; 
 
class GFG{
 
// Function to return the sum of a
// triplet which is closest to x
static int solution(ArrayList arr, int x)
{
     
    // To store the closets sum
    int closestSum = int.MaxValue;
 
    // Run three nested loops each loop 
    // for each element of triplet
    for(int i = 0; i < arr.Count; i++) 
    {
        for(int j = i + 1; j < arr.Count; j++)
        {
            for(int k = j + 1; k < arr.Count; k++)
            {
                if (Math.Abs(x - closestSum) > 
                    Math.Abs(x - ((int)arr[i] + 
                   (int)arr[j] + (int)arr[k])))
                {
                    closestSum = ((int)arr[i] + 
                                  (int)arr[j] + 
                                  (int)arr[k]); 
                }
            } 
        }
    }
     
    // Return the closest sum found
    return closestSum;
}
 
// Driver code
public static void Main(string[] args) 
{
    ArrayList arr = new ArrayList(){ -1, 2, 1, -4 };
    int x = 1;
    Console.Write(solution(arr, x));
}
}
 






