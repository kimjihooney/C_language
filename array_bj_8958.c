#include <stdio.h>
#include <string.h> //use strlen function

int check_O_sum();

int main(void)
{
    //array_bj
    //num 8958

    int tc; //test case  

    scanf("%d", &tc);

    int print[tc];

    for(int i = 0; i < tc; i++)
    {
        print[i] = check_O_sum();
    }
    
    for(int i = 0; i < tc; i++)
    {
        printf("%d\n", print[i]);
    }


    return 0;
}

int check_O_sum()
{
    int len;
    char ox[80]; //ox
    int sum = 0;
    int add = 1;

    scanf("%s", ox);

    len = strlen(ox);

    for(int i = 0; i < len; i++)
    {
        if(ox[i] == 'O')
        {
            sum += add;
            add++;
        }
        if(ox[i] == 'X')
        {
            add =1;
        }
    }

    return sum;
}