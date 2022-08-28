#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();


int main(void) 
{
    
   //function_project
   //문이 5개가 있고, 각 문마다 점점 어려운 수식퀴즈가 출제(랜덤)
   //맞히면 통과, 틀리면 실패
   
    srand(time(NULL));
    int count = 0;
    for(int i = 1; i < 6; i++)
    {
        
        //x * y =?
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);
       
        showQuestion(i, num1, num2); //i번째 퀴즈
       
        int answer = -1;
        scanf("%d", &answer);
        if(answer == -1)
        {
            pritnf("프로그램을 종료합니다.\n");
            break;
        }
        else if(answer == num1 * num2)
        {
            //성공
            success();
            count++;
        }
        else
        {
            //실패
            fail();
        }
       
    }
   
    printf(\n\n 당신은 %d개의 비밀번호 중 %d개를 맞혔습니다.\n", count);
    
    
    
    return 0;
}

int getRandomNumber(int level)
{
    return rand() % (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2)
{
    printf("\n\n\n######## %d번째 비밀번호 ########\n", level);
    printf("\n\t%d X %d는? \n\n", num1, num2);
    printf("\n비밀번호를 입력하세요 (종료 : -1) >> ");
}

void success()
{
    printf("\n >> Good ! 정답입니다.\n");
}


void fail()
{
    printf("\n >> 땡 ! 틀렸습니다.\n");
}
