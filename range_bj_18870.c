#include <stdio.h>
#include <string.h>

typedef struct
{
    int x;
    int index;
} coord;


int main(void)
{
    int N;

    scanf("%d", &N);

    coord arr[N];

    for(int i = 0; i < N; i++)
    {
        arr[i].index = 0;
        scanf("%d", &arr[i].x);
    }
    printf("\n");

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(arr[i].x > arr[j].x)
            {
                arr[i].index += 1;

                

                
                
            }           
        }
    }

    for(int i = 0; i < N; i++)
    {
        printf("%d\n", arr[i].index);
    }


    return 0;
}