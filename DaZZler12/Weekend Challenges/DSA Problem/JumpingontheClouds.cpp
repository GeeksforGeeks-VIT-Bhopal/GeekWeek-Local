#include<bits\stdc++.h>

int main(){
    int n,c_i,count=0; 
    scanf("%d",&n);
    int *c = (int*)malloc(sizeof(int) * n);
    for(c_i = 0; c_i < n-1; c_i++){
       scanf("%d",&c[c_i]);
    }
    for(c_i = 0; c_i < n-1; c_i++)
        {
        if(c[(c_i)+2]==0)
            {
            c_i++;
            count++;
        }
            else if(c[(c_i)+1]==0)
                {
                count++;
            }
        }
    printf("%d",count);
    return 0;
}
