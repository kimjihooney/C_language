#include <stdio.h>

int main(void) 
{
    //array
    //num 3052
    
    //int A[10] = {1,2,3,4,5,6,7,8,9,10};
    //int A[10] = {42,84,252,420,840,126,42,84,420,126};
    //int A[10] = {39,40,41,42,43,44,82,83,84,85};
    int A[10];
    int B = 42;
    int remain[10];
    int remain_check = 10;
    
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &A[i]);
    }
    
    for(int i = 0; i < 10; i++)
    {
        remain[i] = A[i] % B;
        //printf("%d ", remain[i]);
    }
    
    for(int i = 0; i < 10; i++)
    {
        for(int j = i+1; j < 10; j++)
        {
            if(remain[i] == remain[j])
            {
                remain_check--;
                break;
            }
        }
    }
    printf("%d\n", remain_check);
    
    return 0;
}
