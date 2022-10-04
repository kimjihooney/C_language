#include <stdio.h>
#include <string.h>

typedef struct
{
    char str[50];
    int len;
} coord;


int compare(const void *first, const void *second);

int main(void)
{
    int tc;
    
    scanf("%d", &tc);
    
    coord arr[tc];
    
    for(int i = 0; i < tc; i++)
    {
        scanf("%s", &arr[i].str);
        arr[i].len = strlen(arr[i].str);
    }
    
    qsort(arr, tc, sizeof(coord), compare);
    
    
    for(int i = 0; i < tc; i++)
    {
        if(strcmp(arr[i].str, arr[i+1].str) != 0)
        {
            printf("%s\n", arr[i].str);
        }
    }
    
    
    return 0;
}

int compare(const void *first, const void *second)
{
    coord a = *(coord *)first;
    coord b = *(coord *)second;
    
    if(a.len > b.len) return 1;
    else if(a.len == b.len)
    {
        int len = a.len;
        for(int i = 0; i < len; i ++)
        {
            if((int)a.str[i] > (int)b.str[i]) return 1; 
            else if((int)a.str[i] == (int)b.str[i])
            {
                continue;
            }
            else return -1; 
        }
    }
    else return -1;
}

