#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A;
    int B;

    printf("plz input number : ");
    scanf("%d", &A);
    scanf("%d", &B);

    
    if(abs(A) <= 10000 && abs(B) <= 10000)
    //abs는 stdlib.h 필요함
    {
        if(A>B)
        {
            printf(">");
        }
        else if(A<B)
        {
            printf("<");
        }
        else if(A==B)
        {
            printf("==");
        }
        else printf("comparison error\n");

    }
    else printf("input error\n");



    return 0;
}