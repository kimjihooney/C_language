#include <stdio.h>

int main(void) 
{
    //array
    //num 1546
    
    // int N = 9;
    int N;
    double M;
    double sum = 0;
    
    //시험 갯수 입력
    scanf("%d", &N);
    
    //N개 입력에 따른 점수 입력
    double score[N]; 
    for(int i = 0; i < N; i++)
    {
        scanf("%lf", &score[i]);
    }
    // score[0] = 10;
    // score[1] = 20;
    // score[2] = 30;
    // score[3] = 40;
    // score[4] = 50;
    // score[5] = 60;
    // score[6] = 70;
    // score[7] = 80;
    // score[8] = 90;
    
    
    //입력 받은 점수 중 최대값 산출
    M = score[0];
    for(int i = 0; i < N; i++)
    {
        if(score[i] > M) M = score[i];
    }
    //printf("M is %0.2lf\n\n", M);
    
    // 점수마다 /M*100 계산
    for(int i = 0; i < N; i++)
    {
        //printf("%0.2lf\n", score[i]);
        score[i] = score[i] / M * 100;
        //printf("score[%d] is %0.2lf\n",i , score[i]);
    }
    
    //평균값 계산을 위함 총점 계산
    for(int i = 0; i < N; i++)
    {
        sum += score[i];
    }
    
    printf("%lf", sum/N);
    
    return 0;
}
