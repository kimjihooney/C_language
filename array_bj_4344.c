#include <stdio.h>

float cal_aver_input();

int main() 
{
    //array_bj
    //num 4344
    
    int C;
    
    //input C
    scanf("%d", &C);
    //C = 1;
    
    float rate[C];
    for(int i = 0; i < C; i++)
    {
        rate[i] = cal_aver_input();
    }
    
    for(int i = 0; i < C; i++)
    {
        printf("%0.3lf%\n", rate[i]);    
    }
    
    return 0;
}

float cal_aver_input()
{
    //p_C : test case
    //p_N : student number
    float rate;
    
    int sum = 0;
    float aver;
    int over_aver_num = 0;
    int p_N;
    
    //input student number
    scanf("%d", &p_N);
    //p_N = 5;
    
    int score[p_N];
    //input score
    for(int i = 0; i < p_N; i++)
    {
        scanf("%d", &score[i]);
    }
    //score[0] = 50;
    //score[1] = 50;
    //score[2] = 70;
    //score[3] = 80;
    //score[4] = 100;
    
    //cal sum
    for(int i = 0; i < p_N; i++)
    {
        sum += score[i];
    }
    
    //cal average
    aver = (float)sum / (float)p_N;
    
    //cal over_aver_num
    for(int i = 0; i < p_N; i++)
    {
        if(score[i] > aver) over_aver_num ++;
    }
    
    //cal rate
    rate = (float)over_aver_num / (float)p_N * 100;
    
    //printf("%0.3lf\n", rate);
    
    return rate;
}
