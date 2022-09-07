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

    int mul1_100;
    int mul1_10;
    int mul1_1;

    int mul2_100;
    int mul2_10;
    int mul2_1;

    int mul1;
    int mul2;

    scanf("%d", &mul1);
    scanf("%d", &mul2);

    mul1_100 = mul1 / 100;
    mul1_10 = (mul1 - mul1_100*100) / 10;
    mul1_1 = (mul1 - mul1_100*100 - mul1_10*10);

    mul2_100 = mul2 / 100;
    mul2_10 = (mul2 - mul2_100*100) / 10;
    mul2_1 = (mul2 - mul2_100*100 - mul2_10*10);


    printf("%d\n", mul1*mul2_1);
    printf("%d\n", mul1*mul2_10);
    printf("%d\n", mul1*mul2_100);
    printf("%d\n", mul1*mul2);



    
    return 0;
}