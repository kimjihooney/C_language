#include <stdio.h>

int main() 
{
    //loop
    //num 8393
    
    int n;
    int sum = 0;
    
    n = 500;
    
    if(n>=1 && n<=10000)
    {
        for(int i = 0; i < n; i++)
        {
            sum += i+1;
        }
    }
    
    printf("%d", sum);
    
    return 0;
}
