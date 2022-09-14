#include <stdio.h>
#include <stdint.h>

long long sum(int *p_a, int p_n);

int main(void)
{
    //func_bj_15596.c
    int n;
    
    //scanf("%d", &n);

    int a[5] = {1,2,3,4,5};

    int *b;

    *b = a[5];

    printf("%d\n", *b);
    printf("%d\n", *b+1);
    printf("%d\n", *(b+1));
    

    printf("\n");

    printf("%d\n", b);
    printf("%d\n", b+1);

    for(int i = 0; i < n; i++)
    {
        //printf("%d\n", *b + i);
    }    
    
    //sum(a, n);

    return 0;
}

long long sum(int *a, int n)
{
    long long ans = 0;
    
    for(int i = 0; i < n; i++)
    {
        ans += *a;
        //printf("%d\n", a[i]);
        //printf("%d\n", *p_a + i);
    } 
    
    //printf("%d\n", sum);

    return ans;
}

// long long sum(int* a, int n)
// {
//     long long ans = 0;

//     for(int i = 0; i < n; i++)
//     {
//         ans += ans +a[i];
//     }

//     return ans;
// }