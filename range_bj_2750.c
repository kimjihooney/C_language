#include <stdio.h>

int main() 
{
    //range_bj_2750.c
    
    int tc;
    int min;
    int buff;
    
    scanf("%d", &tc);
    
    int num[tc];
    int array[tc];
    
    for(int i = 0; i <tc; i++)
    {
        array[i] = 0;
    }
    
    for(int i = 0; i < tc; i++)
    {
        scanf("%d", &num[i]);
    }
    
    // for(int i = 0; i < tc; i++)
    // {
    //     for(int j = i + 1; j < tc; j++)
    //     {
    //         if(num[i] > num[j])
    //         {
    //             array[0] = num[j];
    //         }
    //     }
    // }
    
    for(int i = 0; i < tc - 1; i++)
    {
        for(int j = 0; j < tc - 1; j++)
        {
            if(num[j] > num[j+1])
            {
                buff = num[j];
                num[j] = num[j+1];
                num[j+1] = buff;
            }
        }
    }
    
    for(int i = 0; i < tc; i++)
    {
        printf("%d\n", num[i]);
    }
    
    return 0;
}
