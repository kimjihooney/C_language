#include <stdio.h>
#include <string.h>

int convert(char * word);
int call_time(int num);

int main() 
{
    //string_bj_5622.c
    char word[100];
    
    scanf("%s", word);
    
    int len = strlen(word);
    int num;
    int sum = 0;
    
    for(int i = 0; i < len; i++)
    {
        num = convert(word[i]);
        sum += call_time(num);
        //printf("%d", num);
    }
    
    printf("%d", sum);
  
    
    return 0;
}

int convert(char * word)
{
    switch((int)word)
    {
        case 65 :
            return 2;
            break;
        case 66 : 
            return 2;
            break;
        case 67 : 
            return 2;
            break;
        case 68 : 
            return 3;
            break;
        case 69 : 
            return 3;
            break;
        case 70 : 
            return 3;
            break;
        case 71 : 
            return 4;
            break;
        case 72 : 
            return 4;
            break;
        case 73 : 
            return 4;
            break;
        case 74 : 
            return 5;
            break;
        case 75 : 
            return 5;
            break;
        case 76 : 
            return 5;
            break;
        case 77 : 
            return 6;
            break;
        case 78 : 
            return 6;
            break;
        case 79 : 
            return 6;
            break;
        case 80 : 
            return 7;
            break;
        case 81 : 
            return 7;
            break;
        case 82 : 
            return 7;
            break;
        case 83 : 
            return 7;
            break;
        case 84 : 
            return 8;
            break;
        case 85 : 
            return 8;
            break;
        case 86 : 
            return 8;
            break;
        case 87 : 
            return 9;
            break;
        case 88 : 
            return 9;
            break;
        case 89 : 
            return 9;
            break;
        case 90 : 
            return 9;
            break;
            
    }
    
}

int call_time(int num)
{
    switch(num)
    {
        case 1:
            return 2;
            break;
        case 2:
            return 3;
            break;
        case 3:
            return 4;
            break;
        case 4:
            return 5;
            break;
        case 5:
            return 6;
            break;
        case 6:
            return 7;
            break;
        case 7:
            return 8;
            break;
        case 8:
            return 9;
            break;
        case 9:
            return 10;
            break;
        
    }
}
