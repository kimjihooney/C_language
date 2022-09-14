#include <stdio.h>

int main(void) 
{
    //array
    //num 2562
    int N[9];
    int max;
    int max_flag;
    
    for(int i=0; i<=8; i++)
    {
        scanf("%d", &N[i]);
        // if(N[i]>=100 && N[i] < 0)
        // {
        //     printf("input error\n");
        //     break;
        // }
        //printf("%d ", N[i]);
    }
    
    max = N[0];
    max_flag = 0;
    
    for(int j=0; j<=8; j++)
    {
        if(N[j] > max) 
        {
            max = N[j]; 
            max_flag=j;
        }
    }
    
    printf("%d\n%d", max, max_flag+1);
    
    return 0;
}
