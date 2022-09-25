#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b); //오름차순 비교 함수 구현


int main() 
{
    //array_bj_2751.c
    int tc;
    
    scanf("%d", &tc);
    
    int num[tc];
    
    for(int i = 0; i < tc; i++)
    {
        scanf("%d", &num[i]);
    }
    
    qsort(num, sizeof(num) / sizeof(int), sizeof(int), compare);
        
    for(int i = 0; i <tc; i++)
    {
        printf("%d\n", num[i]);
    }
    
    
    
    
    return 0;
}


int compare(const void *a, const void *b)
{
    int num1 = *(int *)a;
    
    int num2 = *(int *)b;
    
    if(num1 < num2) return -1;
    if(num1 > num2) return 1;
    
    return 0;
}
