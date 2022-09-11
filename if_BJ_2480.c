#include <stdio.h>
//#include <stdlib.h>

int check_dice_input_error(int dice_1, int dice_2, int dice_3);
void print_price(int dice_1, int dice_2, int dice_3);
int find_same(int dice_1, int dice_2, int dice_3);
int find_big(int dice_1, int dice_2, int dice_3);

int main() {
    // if_BJ
    // num 2480
    
    int dice_1;
    int dice_2;
    int dice_3;
    
    dice_1 = 6;
    dice_2 = 2;
    dice_3 = 5;
    
    int dice_check;
    dice_check = check_dice_input_error(dice_1, dice_2, dice_3);
    
    switch(dice_check)
    {
        case 0 :
            printf("\nerror\n");
        
        case 1 :
            print_price(dice_1, dice_2, dice_3);
    }
    
    return 0;
}

int check_dice_input_error(int dice_1, int dice_2, int dice_3)
{
    if(dice_1 >= 0 && dice_1 <=6)
    {
        if(dice_2 >= 0 && dice_2 <=6)
        {
            if(dice_2 >= 0 && dice_2 <=6)
           {
            return 1;   
            }
            else 
            {
                printf("third dice in error\n");
                return 0;
            }
        }
        else 
        {
            printf("second dice in error\n");
            return 0;
        }
    }
    else
    {
        printf("first dice in error\n");
        return 0;
    }
}

void print_price(int dice_1, int dice_2, int dice_3)
{
    if(dice_1 == dice_2 && dice_1 == dice_3)
    {
        printf("%d", 10000+dice_1*1000);
    }
    else if(dice_1 == dice_2 || dice_1 == dice_3 || dice_2 == dice_3)
    {
        int same;
        same = find_same(dice_1, dice_2, dice_3);
        printf("%d", 1000+same*100);
    }
    else
    {
        int big;
        big = find_big(dice_1, dice_2, dice_3);
        printf("%d", big*100);
    }
    
}

int find_same(int dice_1, int dice_2, int dice_3)
{
    if(dice_1 == dice_2)
    {
        return dice_1;
    }
    else if(dice_1 == dice_3)
    {
        return dice_1;
    }
    else if(dice_2 == dice_3)
    {
        return dice_2;
    }
    else
    {
        printf("same function error\n");
        return 0;
    }
}

int find_big(int dice_1, int dice_2, int dice_3)
{
    if(dice_1 > dice_2)
    {
        if(dice_1 > dice_3)
        {
            return dice_1;
        }
        else return dice_3;
    }
    else if (dice_2 > dice_3)
    {
        return dice_2;
    }
    else return dice_3;
}
