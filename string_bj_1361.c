#include <stdio.h>
#include <string.h>

int check_word(char * word, int len);


int main(void)
{
    //string_bj_1316.c
    int tc;

    char word[100];

    scanf("%d", &tc);

    int num[tc];

    int len;

    for(int i = 0; i < tc; i++)
    {
        scanf("%s", word);

        len = strlen(word);

        num[i] = check_word(word, len);
        //printf("%d - %d\n", i, num[i]);

    }

    int sum = 0;
    for(int i = 0; i < tc; i++)
    {
        sum += num[i];        
    }

    printf("%d", sum);

    return 0;
}


int check_word(char * word, int len)
{
    int check = 0;
    int check_arr[len];

    //init array
    for(int i = 0; i < len; i++)
    {
        check_arr[i] = 0;
    }

    //different word
    int sum = 0;
    for(int i = 0; i < len; i++)
    {        
        for(int j = i + 1; j < len; j++)
        {
            if(word[i] == word[j])
            {
                check_arr[i] = 0;
                break;
            }
            else if(word[i] != word[j])
            {
                check_arr[i] = 1;
            }
            //diff word -> check = 1
            else check_arr[i] = 0;
        }
        sum += check_arr[i];
    }
    if(sum == len - 1)
    {
        check = 1; // All diff -> correct
        return check;
    }
    
    //check aabbaa / abac
    for(int i = 0; i < len; i++)
    {
        for(int j = i + 1; j < len; j++)
        {
            if(word[i] != word[j])
            {
                for(int k = j + 1; k < len; k++)
                {
                    if(word[i] == word[k])
                    {
                        check = 0;
                        //printf("\nc\n");
                        return check;
                    }
                }
                
            }
        }
    }


    return 1;

    /*
    //word repeat check block
    for(int i = 0; i < len; i++)
    {
        if(word[i] == word[i+1])
        {
            check_arr[i] = 1;
            check_arr[i+1]= 1;
        }
    }

    //for banrye
    // for(int i = 0; i < len; i++)
    // {
    //     if(word[i] != word[i+1])
    //     {
    //         check_arr[i] = 1;
    //         check_arr[i+1]= 1;
    //     }
    // }


    




    //return check block
    for(int i = 0; i < len; i++)
    {
        if(check_arr[i] == 0)
        {
            check = 0;
            return check;
        }
        else check = 1;

    }

    return check;
    */
}