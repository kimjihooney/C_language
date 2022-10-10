#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *p1;
    
    p1 = (int *)malloc(sizeof(int)); // int형의 크기만큼 메모리를 할당해라
    
    if(p1 == NULL)
    {
        printf("malloc fail\n");
        exit(1);
    }
    *p1 = 100;
    
    printf("%d\n", *p1);
    
    free(p1); //메모리 할당 해제
    
    return 0;
}
