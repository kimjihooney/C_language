#include <stdio.h>
#include <string.h>

typedef struct
{
    unsigned int age;
    char name[101];
    int seq;
} coord;

int compare(const void *first, const void *second);

int main(void)
{
    int N;
    
    scanf("%d", &N);
    
    coord arr[N];
    
    for(int i = 0; i < N; i++)
    {
        scanf("%d %s", &arr[i].age, &arr[i].name);
        arr[i].seq = i;
    }
    
    
    qsort(arr, N, sizeof(coord), compare);
    
    
    for(int i = 0; i < N; i++)
    {
        printf("%d %s\n", arr[i].age, arr[i].name);
        //printf(" seq : %d\n", arr[i].seq);
    }
    
    return 0;
}

int compare(const void *first, const void *second)
{
    coord a = *(coord *)first;
    coord b = *(coord *)second;
    
    if(a.age > b.age)
    {
        return 1;
    }
    else if(a.age == b.age)
    {
        if(a.seq > b.seq) return 1;
        else return -1;
        
    }
    else return -1;
    
    return 0;
    
}

