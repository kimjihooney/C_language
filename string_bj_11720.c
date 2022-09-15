#include <stdio.h>

int main(void)
{
    //string_bj_11720.c
    int N;
    int sum = 0;

    scanf("%d", &N);

    int num[N];

    for(int i = 0; i < N; i++)
    {
        scanf("%1d", &num[i]);
    }

    // for(int i = 0; i < N; i++)
    // {
    //     printf("%1d\n", num[i]);
    // }

    for(int i = 0; i < N; i++)
    {
        sum += num[i];
    }
    printf("%d", sum);

    return 0;
}










//망함

// #include <stdio.h>

// unsigned int sqr(int x, int y);

// int main(void)
// {
//     //string_bj_11720.c
//     int N;
//     int sum = 0;
//     int num;     

//     scanf("%d", &N);
//     scanf("%d", &num); 

//     int array_num[N];
    
//     unsigned int a;
//     array_num[0] = 0;
//     for(int i = 1; i <= N; i++)
//     {
//         //array_num[i] = num / pow(10.0, (double)N-i);
//         array_num[i] = num / sqr(10, N-i);
//         num = num - sqr(10, N-i) * array_num[i];


//         //num = num - pow(10.0, (double)N-i) * array_num[i];
//         //a = pow(10.0, (double)N-i);        
//         //a=sqr(10,N-i);
//         //printf("%d번째, 자리수:%d, %d\n", i, a, array_num[i]);
//     }
//     for(int i = 1; i <= N; i++)
//     {
//         //printf("%d  ", array_num[i]);
//         sum += array_num[i];
//     }
//     printf("%d", sum);

//     // a = pow(10.0, 11.0);
//     // double b;
//     // b = sqr(10.0, 11.0);
//     // printf("%f, %f", a, b);
    
//     return 0;
// }

// unsigned int sqr(int x, int y)
// {
//     unsigned int sqr = 1;
    
//     if(y == 0 || x == 0)
//     {
//         return 1;
//     }
//     for(int i = 0; i < y; i++)
//     {
//         sqr = sqr * x;
//     }

//     return sqr;
// }