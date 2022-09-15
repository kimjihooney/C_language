#include <stdio.h>

int main(void)
{
    //string_bj_10809.c
    char word[100] = {0, };

    scanf("%s", word);

    for(int i = 97; i <= 122; i++)
    {
        int j = 0;
        while(word[j] != 0) //true일때 반복. false면 종료
        {
            if(word[j] == (char)i) break;
            j++;
        }
        if (word[j] == (char)i) printf("%d ", j);
        else printf("-1 ");
    }

    return 0;
}