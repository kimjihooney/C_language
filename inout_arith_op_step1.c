#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(void)
{
    // //step1
    // printf("Hello World\n");

    // //step2
    // printf("We love kriii\n");

    // //step3
    // int A = 0;
    // int B = 0;

    // A = 9;
    // B = 8;

    // printf("%d\n", A+B);

    // //step4
    // printf("%d\n", A-B);

    // //step5
    // printf("%d\n", A*B);

    // //step6
    // printf("%f\n", (float)A/(float)B);

    // //step7
    // srand(time(NULL));
    // A = rand() % 10000 + 1;
    // B = rand() % 10000 + 1;

    // printf("\n\nStep7\n");
    // printf("%d\n", A+B);
    // printf("%d\n", A-B);
    // printf("%d\n", A*B);
    // printf("%d\n", A/B);
    // printf("%d\n", A%B);

    //step8 (10926)
    //use array
    // char id[50];

    // printf("가입하려는 아이디를 입력하세요 : ");
    // scanf("%s", &id[50]);
    // printf("%s??!", &id[50]);
    
    //use pointer
    // char * id;

    // printf("가입하려는 아이디를 입력하세요 : ");
    // scanf("%s", &id);
    // printf("%s??!", &id);


    //18108번
    
    // int jesus_year = 0;
    // int buda_year = 0;
   
    // printf("서기 연도를 알아보고 싶은 불기연도 입력 : ");
    // scanf("%d", &buda_year);    
    // jesus_year = buda_year - 543;

    // if(buda_year >= 1000 && buda_year <= 3000)
    // {
    //     printf("서기연도는 %d", jesus_year);
    // }
    // else printf("error");


    //3003번
    // int found_chess[6];

    // scanf("%d %d %d %d %d %d", &found_chess[0], &found_chess[1], &found_chess[2], &found_chess[3], &found_chess[4], &found_chess[5]);
    
    // found_chess[0] = 1 - found_chess[0];        
    // found_chess[1] = 1 - found_chess[1];    
    // found_chess[2] = 2 - found_chess[2];    
    // found_chess[3] = 2 - found_chess[3];    
    // found_chess[4] = 2 - found_chess[4];    
    // found_chess[5] = 8 - found_chess[5];
        
    
    // for(int i=0; i<6; i++)
    // {
    //     printf("%d ",found_chess[i]);
    // }
    
    //10430번
    // int a;
    // int b;
    // int c;

    // printf("2~10000까지 숫자를 입력 : ");
    // scanf("%d %d %d", &a, &b, &c);

    // printf("%d\n", (a+b)%c);
    // printf("%d\n", ((a%c)+(b%c))%c);
    // printf("%d\n", (a*b)%c);
    // printf("%d\n", ((a%c)*(b%c))%c);

    int mul1[3] = {0, };
    int mul2[3] = {0, };

    for(int i=0;i<3;i++)
    {
        scanf("%d", &mul1[i]);
    }
    
    printf("%d\n\n",mul1[3]);

    for(int i=0; i<4; i++)
    {
        printf("%d\n",mul1[i]);
    }





    
    return 0;
}