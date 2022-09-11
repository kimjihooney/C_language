#include <stdio.h>

int main(void)
{
    //scanf study

    int a;
    int b;
    int c;

    // 띄어쓰기 입력

    //1안
    // scanf("%d", &a);
    // scanf("%d", &b);

    // printf("띄어쓰기 입력\n");
    // printf("%d,%d\n", a, b);


    //2안
    scanf("%d %d", &a, &b);

    printf("띄어쓰기 입력\n");
    printf("%d,%d\n", a, b);

    /* 결론
    scanf는 따로 쓰나, 같이 쓰나 상관 없음..
    1안/2안 둘중에 아무거나 써도 됨.
    */
    



}