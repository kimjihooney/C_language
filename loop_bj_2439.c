#include <stdio.h>

int main() 
{
    //loop
    //num 2439
    
    int N;
    
    //scanf("%d", &N);
    N=5;
    
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N-i; j++)
        {
            printf(" ");
        }
        for(int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
