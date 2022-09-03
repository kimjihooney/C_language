#include <stdio.h>
#include <time.h>

//물고기 6마리
//어항에 살고 있는데, 사막
// 사막이 너무 더워서, 너무 건조해서 물이 빨리 증발
// 물이 다 증발하기 전에, 물을 줘서 물고기 살려야함
// 물고기는 시간이 지날수록 점점 커짐

int level;
int arrayFish[6];
void initData();
int *cursor;
void printFishes();
void decresedWater(long elapsedTime);

int main(void)
{
    long startTime = 0; //게임 시작 시간

    long totalElapsedTime = 0; // 총 경과 시간

    long prevElapsedTime = 0; //직전 경과 시간  (최근에 물을 준 시간 간격)

    int num; //몇번 어항에 물을 줄 것인지, 사용자 입력

    initData();

    cursor = arrayFish; // cursor[0],,, cursor[1]

    startTime = clock(); // 현재 시간을 ms

    while (1)
    {
        printFishes();
        //getchar(); //임시로 사용자 입력 대기
        printf("몇 번 어항에 물을 주시겠어요?");
        scanf("%d", &num);

        //입력값 체크
        if(num <1 || num >6)
        {
            printf("\n입력값 오류\n");
            continue;
        }
    
        //총 경과 시간
        totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
        printf("총 경과 시간 : %ld 초", totalElapsedTime);

        //직전 물 준 시간 (마지막으로 물 줄 시간) 이후로 흐른 시간
        prevElapsedTime = totalElapsedTime - prevElapsedTime;
        printf("최근 경과 시간 : %ld초\n", prevElapsedTime);

        //어항의 물을 감소 (증발)
        decresedWater(prevElapsedTime);

        //물을 준다
        //1. 어항의 물이 0이면? 물을 주지 않는다..고기 죽음
        if (cursor[num - 1] <= 0)
        {
            printf("%d번 물고기는 죽음\n", num);
        }
        //2. 어항의 물이 0이 아닌 경우, 물을 준다,  100을 넘지 않는지 체크
        else if (cursor[num - 1] <= 100)
        {
            //물을 준다
            printf("%d번 어항에 물을 준다.\n", num);
            cursor[num - 1] += 1;
        }

        //레벨업을 할 건지 (20초마다 한번씩 수행)
        if(totalElapsedTime / 20 > level - 1)
        {
            level++;
            printf(" *** 레벨업 : %d -> %d ***\n\n", level-1, level);
        
            //최종 레벨 5
            if(level == 5)
            {
                printf("\n\n 최고레벨 달성. 게임을 종료합니다.\n\n");
                exit(0);
            }
        }

        //모든 물고기와 죽었는지 확인
        if (checkFishalive()== 0)
        {1
            //물고기 죽음
            printf("물고기 죽음\n");
            exit(0);
        }
        else
        {
            printf("물고기 아직 살아 있음\n");
        }
        prevElapsedTime = totalElapsedTime;

        //10초 -> 15초 (5초 : prevElapsedTime -> 15초) -> 25초 (10초..?))
        //15초를 저장할 값이 없어서  prev에 넣는다
    }

    return 0;
}

void initData()
{
    level = 1;
    for(int i = 0; i <6 ; i++)
    {
        arrayFish[i] = 100; //어항의 물 높이 (0-100)

    }
}

void printFishes()
{
    printf("%3d번%3d번%3d번%3d번%3d번%3d번\n", 1, 2, 3, 4, 5, 6 );

    for (int i = 0; i <6; i++)
    {
        printf("%5d", arrayFish[i]);
    }
    printf("\n\n");
}

void decresedWater(long elapsedTime)
{
    for(int i = 0; i < 6; i++)
    {
        arrayFish[i] -= (level * 3  * (int)elapsedTime);
        //3은 난이도 조절 값
        if(arrayFish[i] < 0)
        {
            arrayFish[i] = 0;
        }
    }

}

int checkFishalive()
{
    for(int i =0; i<6; i++)
    {
        if (arrayFish[i] > 0)
            return 1;
    }
    return 0;
}