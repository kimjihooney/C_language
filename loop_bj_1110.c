#include <stdio.h>

int main() 
{
    //loop
    //num 1110
    
    int N[100] = {0, };
    
    int N_10[100] = {0, };
    int N_1[100] = {0, };
    
    int sum[100] = {0, };
    int sum_n1[100] = {0, };
    
    scanf("%d", &N[0]);
    //N[0] = 99;
    
    for(int i = 0; i < 100; i++)
    {
        N_10[i] = N[i] / 10;
        N_1[i] = N[i] - (N[i]/10) * 10;
    
        sum[i] = N_10[i] + N_1[i];
        
        sum_n1[i] = sum[i] - (sum[i]/10) *10;
        
        N[i+1] = N_1[i]*10 + sum_n1[i];
        
        if(N[0] == N[i+1])
        {
            printf("%d", i+1);
            break;
        }
    }
    
    return 0;
}
