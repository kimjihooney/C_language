#include <stdio.h>

#define len 10001


int main() 
{
    //array_bj_10989.c
    //계수 정렬
    int tc;
    
    scanf("%d", &tc);
    
    int num;
    int count_arr[len] = {0, };
    
    // for(int i = 0; i <tc; i++)
    // {
    //     count_arr[i] = 0;
    // }
    
    for(int i = 0; i < tc; i++)
    {
        scanf("%d", &num);
        count_arr[num] += 1;
    }
    
    for(int i = 0; i <len; i++)
    {
        for(int j = 0; j < count_arr[i]; j++)
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
