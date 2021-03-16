#include <bits/stdc++.h> 
using namespace std; 

int maxOfFour(int w, int x, int y, int z) 
{ 
    int a[2]; 
    a[0] = w, a[1] = x; 

    bool b = (a[0] - a[1] + abs(a[0] - a[1])); 


    swap(a[0], a[!b]); 

    a[1] = y; 
    b = (a[0] - a[1] + abs(a[0] - a[1])); 
    swap(a[0], a[!b]); 

    a[1] = z; 
    b = (a[0] - a[1] + abs(a[0] - a[1])); 
    swap(a[0], a[!b]); 

    return a[0]; 
} 

int main() 
{ 
    int w , x , y , z ;
    
    cin>>w>>x>>y>>z;
     
    cout<< maxOfFour(w, x, y, z); 
    return 0; 
} 
