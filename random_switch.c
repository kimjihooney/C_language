#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    //초기화
    //srand(time(NULL)); //난수 초기화
    //int num = rand() % 3 + 1; //1~3 중에 1개를 뽑는다. 
    /*
    printf("난수 초기화 이전\n");

    for (int i=0; i<10; i++)
    {
        printf("%d", rand() %10); //초기화를 안하면 동일 숫자가 계속 나온다.
    }

    srand(time(NULL));

     printf("\n\n난수 초기화 이후\n");

    for (int i=0; i<10; i++)
    {
        printf("%d", rand() %10);
    }
    */

    // 가위 0  바위1  보2  게임
    /*
    srand(time(NULL));
    int i = rand() % 3; //0~2 반환

    if (i ==0)
    {
        printf("가위\n");
    }
    else if (i ==1)
    {
        printf("바위\n");
    }
    else if (i ==2)
    {
        printf("보\n");
    }
    else
    {
        printf("몰라요\n");
    }
    */
    srand(time(NULL));
    int i = rand() % 3; //0~2 반환

    switch(i)
    {
        case 0 : printf("가위\n"); break; //break가 있어야 빠져나온다 
        case 1 : printf("바위\n"); break; // break가 없으면 default도 수행
        case 2 : printf("보\n"); break;
        default : printf("몰라요\n");
    }
    
    return 0;
}