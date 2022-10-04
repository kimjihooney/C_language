// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>

// //https://sedangdang.tistory.com/19

// //#define len 10001

// void get_average(int N, int *num);
// void get_center(int N, int *num);
// void get_max_count(int N, int num[]);
// void get_diff(int N, int *num);
// //int get_max(int N, int *num);
// //int get_min(int N, int *num);

// int compare(const void* first, const void* second)
// {
//     int* a = (int*)first;
//     int* b = (int*)second;
    
//     if(*a < *b) return -1;
//     else if(*a > *b) return 1;
//     else return 0;
// }

// int main() 
// {
//     //range_bj_2108.c
//     int N;
//     //int min;
    
    
//     scanf("%d", &N);
    
//     int num[N];
    
//     for(int i = 0; i < N; i++)
//     {
//         scanf("%d", &num[i]);
//     }
    
//     qsort(num, N, sizeof(num[0]), compare);
    
//     //printf("avreage is ");
//     get_average(N, num);
    
//     //printf("center is ");
//     get_center(N, num);
    
//     //printf("max count is ");
//     get_max_count(N, num);
    
//     //int max;
//     //max = get_max(N, num);
    
//     //min = get_min(N, num);
//     //printf("diff is ");
//     get_diff(N, num);
    
    
    
//     return 0;
// }

// void get_average(int N, int *num)
// {
//     double sum = 0;
    
//     int ret;
    
//     for(int i = 0; i < N; i++)
//     {
//         sum += (num[i]);
//     }
    
//     ret = round(sum/N);
    
//     printf("%d\n", ret);
// }

// void get_center(int N, int *num)
// {
//     if (N ==1)
//     {
//         printf("%d\n", num[0]);
//     }
        
//     else
//     {
//         printf("%d\n", num[(N+1)/2 - 1]);
//     } 
// }

// void get_max_count(int N, int num[])
// {
//     int arr[8001] = {0,};
//     int index, max = 0, cnt = 0;
    
//     for(int i = 0; i < N; i++)
//     {
//         index = num[i] + 4000;
//         arr[index] += 1;
//         if(arr[index] > max)
//         {
//             max = arr[index];
//         }
//     }
    
//     for(int i = 0; i < 8001; i++)
//     {
//         if(arr[i] == 0)
//         {
//             continue;
//         } 
//         if(arr[i] == max)
//         {
            
//             if(cnt == 0)
//             {
//                 index = i;
//                 cnt += 1;
//             }
//             else if(cnt == 1)
//             {
//                 index = i;
//                 break;
//             }
//         }
//     }
    
//     printf("%d\n", index-4000);
    
// }

// // int get_max(int N, int *num)
// // {
// //     int temp;
// //     int max;
    
// //     for(int i = 0; i < N-1; i++)
// //     {
// //         for(int j = 0; j < N-1; j++)
// //         {
// //             if(num[j] < num[j+1])
// //             {
// //                 temp = num[j];
// //                 num[j] = num[j+1];
// //                 num[j+1] = temp;
// //             }
// //         }
// //     }
// //     max = num[0];
    
// //     return max;
// // }

// // int get_min(int N, int *num)
// // {
// //     int temp;
// //     int min;
    
// //     for(int i = 0; i < N-1; i++)
// //     {
// //         for(int j = 0; j < N-1; j++)
// //         {
// //             if(num[j] > num[j+1])
// //             {
// //                 temp = num[j];
// //                 num[j] = num[j+1];
// //                 num[j+1] = temp;
// //             }
// //         }
// //     }
    
// //     min = num[0];
    
// //     return min;
// // }


// void get_diff(int N, int *num)
// {
//     int max = num[N-1];
//     int min = num[0];
    
//     printf("%d", max - min);
// }



#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const void *first, const void *second);

void get_average(int N, int num[]);
    
void get_center(int N, int num[]);
    
void get_max_count(int N, int num[]);
    
void get_diff(int N, int num[]);
    
int main(void)
{
    int N;
    
    scanf("%d", &N);
    
    int num[N];
    
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }
    
    qsort(num, N, sizeof(num[0]), compare);
    
    get_average(N, num);
    
    get_center(N, num);
    
    get_max_count(N, num);
    
    get_diff(N, num);
    
    return 0;
}

int compare(const void *first, const void *second)
{
    int* a = (int *)first;
    int* b = (int *)second;
    
    if(*a < *b) return -1;
    else if(*a > *b) return 1;
    else return 0;
    
}

void get_average(int N, int num[])
{
    double sum = 0;
    
    int avr;
    
    for(int i = 0; i < N; i++)
    {
        sum += num[i];
    }
    
    avr = round(sum/N);
    
    printf("%d\n", avr);
    
}
    
    
void get_center(int N, int num[])
{
    if(N == 1)
    {
        printf("%d\n", num[0]);
    }
    
    else
    {
        printf("%d\n", num[(N+1)/2 - 1]);
    }
}
    
    
void get_max_count(int N, int num[])
{
    int arr[8001] = {0,};
    int index, max = 0, cnt = 0;
    
    for(int i = 0; i < N; i++)
    {
        index = num[i] + 4000;
        arr[index] += 1;
        if(arr[index] > max)
        {
            max = arr[index];
        }
    }
    
    for(int i = 0; i < 8001; i++)
    {
        if(arr[i] == 0)
        {
            continue;
        } 
        if(arr[i] == max)
        {
            
            if(cnt == 0)
            {
                index = i;
                cnt += 1;
            }
            else if(cnt == 1)
            {
                index = i;
                break;
            }
        }
    }
    
    printf("%d\n", index-4000);
    
}
    
    
void get_diff(int N, int *num)
{
    int max = num[N-1];
    int min = num[0];
    
    printf("%d", max - min);
}






