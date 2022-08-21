#include <stdio.h>

int main(void)
{
  //피라미드 별 만들기 예제
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("끝\n\n");
    
    //오른쪽 정렬
    for (int i = 0; i < 5; i++)
    {
        for (int k = i; k < 5-1; k++)
        {
            printf(" ");
        }
        
        for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
        printf("\n");
    }
}
  
