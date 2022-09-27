#include <stdio.h>
#include <math.h>

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
    
    printf("max count is ");
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
    if(avr < 0) avr -= 1;
    
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
    int arr[8000] = {0, }; //0 ~ 8000 까지의 배열을 -> -4000 ~ 4000 숫자에 넣는다.
    int max;
    int index;
    int temp;
    int second;
    

    for(int i = 0; i < N; i++)
    {
        if(num[i] != 0)
        {
            arr[num[i]+4000]++;
        }
    }

    for(int i = 0; i < N-1; i++)
    {
        for(int j = 0; j < N-1; j++)
        {
            if(arr[j] < arr[j+1])
            {
                index = j + 1;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }      
        }
    }

    if(arr[0] == arr[1])
    {
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
    second = num[1];

    printf("%d\n", second);


    }
    else printf("%d\n", index - 4000);
    
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




