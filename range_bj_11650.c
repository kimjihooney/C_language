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
    int n;

    scanf("%d", &n);

    coord arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    qsort(arr, n, sizeof(coord), compare);

    printf("coord size is %d\n", sizeof(coord));

    for(int i = 0; i < n; i++)
    {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }


    return 0;
}



int compare(const void *a, const void *b)
{
    coord A = *(coord *)a;
    coord B = *(coord *)b;

    if(A.x > B.x) return 1;
    else if(A.x == B.x)
    {
        if(A.y > B.y) return 1;
        else return -1;
    }

    return -1;
}