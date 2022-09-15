#include <stdio.h>

int check_arith_progression(int p_input);

int main(void)
{
    //func_bj_1065.c
    int input;
    int N_1;
    int N_10;
    int N_100;
    int check;

    scanf("%d", &input);

    if(input <= 0 || input > 1000)
    {
        printf("input error\n");
        return 0;
    }

    

    //printf("%d %d %d\n", N_1, N_10, N_100);

    check = 0;
    for(int i = 1; i <= input; i++)
    {
        if(check_arith_progression(i))
        {
            check++;
        }
        
    }
    
    printf("%d", check);


    return 0;
}

int check_arith_progression(int p_input)
{
    int N_1;
    int N_10;
    int N_100;

    N_1 = p_input % 10;
    N_10 = (p_input / 10) % 10;
    N_100 = (p_input / 10) / 10;     
    
    //2차 수열
    if(N_100 == 0)
    {
        return 1;
    }
    else if(N_10 == 0)
    {
        if(N_100 == 0) return 1;
        else return 0;
    }
    if((N_100 - N_10) == (N_10 - N_1))
    {
        return 1;
    }

    else return 0;
}


