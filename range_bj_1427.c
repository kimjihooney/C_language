#include <stdio.h>
#include <string.h>

int main(void)
{
    //range_bj_1427.c
    char num[11];
    int len;
    char temp;
    
    scanf("%s", num);
    
    len = strlen(num);
    
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len; j++)
        {
            if((int)num[j] < (int)num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    
    }
    
    printf("%s", num);
    
    return 0;
}
