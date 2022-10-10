#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char *pc = NULL;
    
    int i = 0;
    
    pc = (char *)malloc(100 * sizeof(char));
    
    if(pc == NULL)
    {
        printf("malloc fail\n");
        exit(1);
    }
    
    //pc가 가르키는 포인터를 1씩 증가시키며 알파벳 소문자를 삽입
    for(i = 0; i < 26; i++)
    {
        *(pc + i)= 'a' + i;
    }
    //아스키 코드 0은 NULL을 의미
    *(pc + i) = 0;
    
    printf("%s\n", pc);
    
    free(pc);
    
    return 0;
}
