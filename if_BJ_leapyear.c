#include <stdio.h>

int check_leap_year(int p_year);

int main() {
    // if_BJ
    // num 2753
    
    int year;
    int check;
    
    year = 1999;
    //scanf("%d", &year);
    
    check = check_leap_year(year);
    
    printf("%d", check);
    
    return 0;
}

int check_leap_year(int p_year)
{
    if(p_year%4 == 0)
    {
        if(p_year%100 != 0 || p_year%400 == 0)
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}
