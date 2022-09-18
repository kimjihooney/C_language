#include <stdio.h>

int check_word(char * word, int len);


int main(void)
{
    int tc;

    char word[100];

    scanf("%d", &tc);

    int num[tc];

    int len;

    for(int i = 0; i < tc; i++)
    {
        scanf("%d", word);

        len = strlen(word);

        num[i] = check_word(word, len);

    }

    int sum = 0;
    for(int i = 0; i < tc; i++)
    {
        sum += num[i];
        printf("%d", sum);
    }

    return 0;
}


int check_word(char * word, int len)
{
    int check = 0;




    return check;
}