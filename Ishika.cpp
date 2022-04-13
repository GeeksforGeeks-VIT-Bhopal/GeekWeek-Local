#include <stdio.h> 
  
int main() 
{ 
    int arr[5]; 
    arr[0] = 5; 
    arr[2] = -10; 
    arr[3 / 2] = 2; // this is same as arr[1] = 2 
    arr[3] = arr[0]; 
  
    printf("%d %d %d %d", arr[0],  
           arr[1], arr[2], arr[3]); 
  
    return 0; 
}
C++
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int arr[5]; 
    arr[0] = 5; 
    arr[2] = -10; 
  
    // this is same as arr[1] = 2 
    arr[3 / 2] = 2; 
    arr[3] = arr[0]; 
  
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " "
         << arr[3]; 
  
    return 0; 
}
No Index Out of bound Checking: 
There is no index out of bounds checking in C/C++, for example, the following program compiles fine but may produce unexpected output when run.  

C

// This C program compiles fine 
// as index out of bound 
// is not checked in C. 
  
#include <stdio.h> 
  
int main() 
{ 
    int arr[2]; 
  
    printf("%d ", arr[3]); 
    printf("%d ", arr[-2]); 
  
    return 0; 
}
C++

// This C++ program compiles fine 
// as index out of bound 
// is not checked in C. 
  
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int arr[2]; 
  
    cout << arr[3] << " "; 
    cout << arr[-2] << " "; 
  
    return 0; 
}
