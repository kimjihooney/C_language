#include <stdio.h>
#include <string.h>

int main(void)
{
    //string_bj_2941.c
    char cro_word[100];

    scanf("%s", cro_word);

    int len = strlen(cro_word);
    int num = 0;

    for(int i = 0; i < len; i++)
    {
        int asc = (int)cro_word[i];

        if(cro_word[i] == 'c')
        {
            if(cro_word[i+1] == '=') {
                num++;
                //printf("%d", i);
            }
            else if(cro_word[i+1] == '-') num++;
            else num++;
        }
        else if(cro_word[i] == 'd')
        {
            if(cro_word[i+1] == '-') num++;
            else if(cro_word[i+1] == 'z')
            {
                if(cro_word[i+2] == '='){
                    num++;                    
                }
                else num++;
            }
            else num++;
        }
        else if(cro_word[i] == 'l')
        {
            if(cro_word[i+1] == 'j') num++;
            else num++;
        }
        else if(cro_word[i] == 'n')
        {
            if(cro_word[i+1] == 'j') num++;
            else num++;
        }
        else if(cro_word[i] == 's')
        {
            if(cro_word[i+1] == '=') num++;
            else num++;
        }
        else if(cro_word[i] == 'z')
        {
            if(cro_word[i+1] == '='){
                if(cro_word[i-1] == 'd') continue;
                else num++;
            }
            else num++;
        }
        else if(cro_word[i] == 'j'){
            if(cro_word[i-1] == 'l') continue;
            else if(cro_word[i-1] == 'n') continue;
            else num++;
        }
        else if(cro_word[i] == 'e') num++;
        else if(cro_word[i] == 'a') num++;
        else if(cro_word[i] == 'k') num++;

        else if(cro_word[i] == '-'){
            if(cro_word[i-1] == 'd') continue;
            else if(cro_word[i-1] == 'c') continue;
            else num++;
        }

        else if(cro_word[i] == '='){
            if(cro_word[i-1] == 'c') continue;
            else if(cro_word[i-1] == 'z'){
                if(cro_word[i-2] == 'd') continue;
            }
            else if(cro_word[i-1] == 's') continue;
            else if(cro_word[i-1] == 'z') continue;
            
            else num++;
        }

        //일반 알파벳 출력    
        else num++;   
        // else if(asc >= 97 && asc <= 122)
        // {
        //     num++;
        // }
    }                      
 

    printf("%d", num);



    return 0;
}