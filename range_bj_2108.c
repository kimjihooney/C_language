#include <stdio.h>

#define len 10001

void get_average(int N, int *num);
void get_center(int N, int *num);
void get_max_count(int N, int *num);
void get_diff(int max, int min);
int get_max(int N, int *num);
int get_min(int N, int *num);

int main() 
{
    //range_bj_2108.c
    int N;
    
    
    
    scanf("%d", &N);
    
    int num[N];
    
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }
    
    printf("avreage is ");
    get_average(N, num);
    
    printf("center is ");
    get_center(N, num);
    
    get_max_count(N, num);
    
    int max;
    max = get_max(N, num);
    int min;
    min = get_min(N, num);
    printf("diff is ");
    get_diff(max, min);
    
    
    
    return 0;
}

void get_average(int N, int *num)
{
    int sum = 0;
    int avr;
    
    for(int i = 0; i < N; i++)
    {
        sum += num[i];
    }
    
    avr = sum / N;
    
    printf("%d\n", avr);
}

void get_center(int N, int *num)
{
    int temp;
    int cen;
    
    for(int i = 0; i < N-1; i++)
    {
        for(int j = 0; j < N-1; j++)
        {
            if(num[j] > num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    
    cen = N/2;
    
    printf("%d\n", num[cen]);
    
}

void get_max_count(int N, int *num)
{
    int count_arr[N];
    int temp;
    int second_min;
    int index;
    
    for(int i = 0; i < N; i++)
    {
        count_arr[i] = 0;
    }
    
    for(int i = 0; i < N-1; i++)
    {
        for(int j = 0; j < N-1; j++)
        {
            if(num[j] > num[j+1]) // min부터 순차적으로
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    
    for(int i = 0; i < N; i++)
    {
        if(num[i] != num[i+1])
        {
            count_arr[i]++;
        }
        else
        {
            for(int j = 0; j < N; j++)
            {
                if(num[i] == num[j])
                {
                    count_arr[i]++;
                }
            }
        }
    }
    
    for(int i = 0; i < N-1; i++)
    {
        for(int j = 0; j < N-1; j++)
        {
            if(count_arr[j] < count_arr[j+1]) // max부터 순차적으로
            {
                temp = count_arr[j];
                count_arr[j] = count_arr[j+1];
                count_arr[j+1] = temp;
            }
        }
    }
    
    
    for(int i = 0; i < N; i++)
    {
        if(count_arr[i] != count_arr[i+1])
        {
            printf("%d", count_arr[0]);
        }
    }
    
}

int get_max(int N, int *num)
{
    int temp;
    int max;
    
    for(int i = 0; i < N-1; i++)
    {
        for(int j = 0; j < N-1; j++)
        {
            if(num[j] < num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    max = num[0];
    
    return max;
}

int get_min(int N, int *num)
{
    int temp;
    int min;
    
    for(int i = 0; i < N-1; i++)
    {
        for(int j = 0; j < N-1; j++)
        {
            if(num[j] > num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    
    min = num[0];
    
    return min;
}


void get_diff(int max, int min)
{
    //printf("max is %d\n", max);
    //printf("min is %d\n", min);
    printf("%d", max - min);
}





