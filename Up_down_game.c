#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
    //up and down
    srand(time(NULL));
    int num = rand() % 100 +1 //1~100
    
    print("number : %d\n", num);
    
    int answer = 0;
    int chance = 5;
    while(1) //참 : 1. 거짓 : 0
    {
        printf("남은 기회 : %d번\n", chance--);
        printf("숫자를 맞혀보세요 (1~100 숫자만 입력) : ");
        scanf("%d", &answer);
        
        if(answer > num)
        {
            printf("Down \n\n");
        }
        else if (answer < num)
        {
            printf("up\n\n");
        }
        else if (answer == num)
        {
            printf("정답입니다.\n\n");
            break;
        }
        else 
        {
            printf("오류 발생\n\n");
        }
        
        if(chance == 0)
        {
            printf("모든 기회를 다 사용하셨네요. 실패했습니다.\n\n");
            break;
        }
    }
   
    return 0;
}
