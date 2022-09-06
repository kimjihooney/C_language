#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    //step1
    printf("Hello World\n");

    //step2
    printf("We love kriii\n");

    //step3
    int A = 0;
    int B = 0;

    A = 9;
    B = 8;

    printf("%d\n", A+B);

    //step4
    printf("%d\n", A-B);

    //step5
    printf("%d\n", A*B);

    //step6
    printf("%f\n", (float)A/(float)B);

    //step7
    srand(time(NULL));
    A = rand() % 10000 + 1;
    B = rand() % 10000 + 1;

    printf("\n\nStep7\n");
    printf("%d\n", A+B);
    printf("%d\n", A-B);
    printf("%d\n", A*B);
    printf("%d\n", A/B);
    printf("%d\n", A%B);




    return 0;
}