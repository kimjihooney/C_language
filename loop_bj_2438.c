#include <stdio.h>

int main() 
{
    //loop
    //num 2438
    
    int N;
    
    //scanf("%d", &N);
    N = 100;
    
    for(int i = 0; i < N; i++)
    {
        for(int k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
