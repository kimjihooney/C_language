#include <stdio.h>
#include <string.h>

int main() 
{
    //string_bj_1157.c
    char word[100000000];
    
    scanf("%s", word);
    
    int len = strlen(word);
    
    int count[26] = {0,}; // 26 -> 알파벳 갯수
    
    int max_count = 0;
    
    //
    for(int i = 0; i < len; i++)
    {
       int num_word = word[i];
       if(num_word >= 97 && num_word <= 122)
       { 
           num_word -= 32; // 대문자로 변환
       }
       // 
       num_word -= 65; //배열에 0부터 저장
       
       count[num_word] += 1;
    }
    
    int max = 0;
    int max_index;
    
    for(int i = 0; i < 26; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            max_index = i;
        }
        
    }
    
    int flag = 0;
    for(int i = 0; i < 26; i++)
    {
        if(count[i] == max) flag++;
    }
    
    if(flag > 1)
    {
        printf("?\n");
    }
    else printf("%c", (char)(max_index + 65));
    return 0;
}
