#include <stdio.h>

void factorial_rf(int n, int sum);

int main()
{
    int N;
    int sum = 1;
    int result;

    scanf("%d", &N);

    if(N == 0)
    {
        printf("1\n");

        return 0;

    }
    
    factorial_rf(N, sum);

    return 0;
}

void factorial_rf(int n, int sum)
{
    sum *= n;
    
    if(n == 1)
    {
        printf("%d\n", sum);
        return;
    }
    
    factorial_rf(n-1, sum);
}
