#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int x;
    int y;
} coord;

int compare(const void *a, const void *b);

int main(void)
{
    //range_bj_11651.c
    int tc;

    scanf("%d", &tc);

    coord arr[tc];

    for(int i = 0; i < tc; i++)
    {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    qsort(arr, tc, sizeof(coord), compare);

    for(int i = 0; i < tc; i++)
    {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }

    return 0;
}

int compare(const void *a, const void *b)
{
    coord A = *(coord *)a;
    coord B = *(coord *)b;

    if(A.y > B.y) return 1;
    else if(A.y == B.y)
    {
        if(A.x > B.x) return 1;
        else return -1;
    }
    else return -1;    
}