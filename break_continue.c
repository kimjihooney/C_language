#include <stdio.h>

int main(viod)
{
    //break / continue
    //1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다.

    /*
    for (int i = 1; i <= 30; i++)
    {
        if(i >= 6)
        {
            printf("나머지 학생은 집에 가세요\n");
            break; //포문 탈출
        }
        printf("%d번 학생은 조별 발표 준비를 하세요\n", i);
    }
    */

   //1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
   //7번을 제외하고 6번부터 10번까지 조별 발표를 하세요.
   /*
    for(int i = 1; i <= 30; i++)
    {
        if (i >= 6 && i <=10)
        {
            if (i ==7)
            {
                printf("%d번 학생은 결석입니다.\n", i); //7번 학생은 아래 if문도 포함되게 된다.
                continue; // 그 이후 문장 실행안하고 바로 다음 for문으로 넘어간다.
            }
            printf("%d 번 학생은 조별 발표 준비를 하세요.\n", i);
        }
    }
    */
    //and or
    int a = 10;
    int b = 11;
    int c = 12;
    int d = 13;
    if (a == b && c == d)
    {
        printf("a와 b는 같고, C와 d도 같습니다.\n");
    }
    else if (a == b || c == d)
    {
        printf("a와 b, C와 d 둘중에 하나라도 같습니다.\n");
    }
    else
    {
        printf("값이 서로 다르네요.\n");
    }


    return 0;
}

