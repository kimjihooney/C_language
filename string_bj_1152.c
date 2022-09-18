#include <stdio.h>
#include <string.h>

int main() 
{
    //string_bj_1152.c
    
    char str[1000000];
    
    scanf("%[^\n]s", str);
    //printf("%s\n", str);
    
    int num = 1; // 공백 숫자
    int len = strlen(str); //문자열 길이
    //printf("%d\n\n", len);
    
    for(int i = 0; i < len; i++)
    {
        if(str[i] == ' ') num++;
        //printf("%d\n", i);
        //printf("%d\n", num);
    }
    
    if(str[0] == ' ') num--;
    if(str[len-1] == ' ') num --;
    
    printf("%d", num);
    
    return 0;
}
