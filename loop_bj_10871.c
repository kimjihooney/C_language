#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() 
{
    //loop
    //num 10871
    
    int N; //integer
    int A[10000]; //progression
    int X; 
    
    //scanf("%d %d", &N, &X);
    
    srand(time(NULL));
    
    N=10;
    X=5;
    
    for(int i=0; i<N; i++)
    {
        A[i] = rand() % 10 +1;
        printf("%d ", A[i]);
    }
    
    printf("\n\n");
    
    for(int i=0;i<N;i++)
    {
        if(A[i] < X)
        {
            printf("%d ", A[i]);
        }
    }
    
    return 0;
}
