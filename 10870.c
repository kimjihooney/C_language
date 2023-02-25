#include <stdio.h>

void for_func(int n);
void pibo_func(int zero, int first, int n);

int main()
{
    int n;

    scanf("%d", &n);

    //n = 10;

    int zero = 0;
    int first = 1;
    pibo_func(zero, first, n);


    return 0;
}

void for_func(int n)
{
    int sum = 0;
    for(int i = 0; i <= n; i++)
    {
        
        sum += i;
    }

    printf("%d", sum);
}
void pibo_func(int zero, int first, int n)
{
    int temp = first;
    first += zero;

    if(n == 0)
    {
        printf("0\n");
        return;
    }
    else if(n == 1)
    {
        printf("%d", temp);
        return;
    }
    pibo_func(temp, first, n-1);

}
