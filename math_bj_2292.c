#include <stdio.h>
#define len 1000000000

int main(void)
{
    // math_bj_2292.c

    //long long num_shell[len];
    long long input;

    //init
    // for(int i = 0; i < len; i++)
    // {
    //     num_shell[i] = 0;    
    // }
    // num_shell[0] = 1;

    // scanf("%d", &input);

    // for(int i = 1; i < len; i++)
    // {
    //     num_shell[i] = (num_shell[i-1] + 1) + 6*i - 1;
    // }
    // //printf("max is %d\n", num_shell[99]);

    // for(int i = 1; i < len; i++)
    // {
    //     if(input == 1)
    //     {
    //         printf("1");
    //         break;
    //     }
    //     else if(input <= num_shell[i])
    //     {
    //         printf("%d", i + 1);
    //         break;
    //     }
    // }

    
   
    long long i = 1;
    int next_num, cur_num, bef_num;
    bef_num = 1;

    scanf("%d", &input);

    while(1)
    {
        next_num = 0;
        cur_num = (bef_num + 1) + 6*i - 1;
        bef_num = cur_num;

        if(input == 1)
        {
            printf("1");
            break;
        }
        else if(input <= cur_num)
        {
            printf("%d", i + 1);
            break;
        }
        i++;
    }

    return 0;
}


    //     num_shell[i+1] = 0;
    //     num_shell[i] = (num_shell[i-1] + 1) + 6*i - 1;

    //     if(input == 1)
    //     {
    //         printf("1");
    //         break;
    //     }
    //     else if(input <= num_shell[i])
    //     {
    //         printf("%d", i + 1);
    //         break;
    //     }
    //     i++;
    // }