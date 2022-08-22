#include <stdio.h>

int main(void)
{
    //나이 입력을 받아서 성인인지 학생인지 나타내기

    int age = 0;

    printf("몇살이에요?\n");
    printf("(숫자만 입력하세요 : )");

    scanf("%d", &age);

    if (age < 20)
    {
        printf("학생입니다.");
    }

    else if (age >= 20)
    {
        printf("성인입니다.");
    }
    else
    {

    }
    return 0;

}