#include <stdio.h>
//#include <stdlib.h>

void print_time(int p_a, int p_b, int p_c);


int main() {
    // if_BJ
    // num 2525
    int a;
    int b;
    int c;
    
    a = 23;
    b = 48;
    c = 25;
    
    if(a>= 0 && a <=23)
    {
        if(b>= 0 && b <=59)
        {
            if(c>= 0 && c <=1000)
            {
                print_time(a, b, c);
            }
            else printf("cook time input error\n");
        }
        else printf("minute input error\n");
    }
    else printf("hour input error\n");
    
    return 0;
}

void print_time(int p_a, int p_b, int p_c)
{
    int time_m; //converting minute time
    int time_cooked; //after cooked time
    //p_a : currnet hour
    //p_b : current min
    //p_c : cooking time (minute)
    
    time_m = p_a*60 + p_b;
    
    time_cooked = time_m + p_c;
    
    p_a = time_cooked / 60;
    p_b = time_cooked - p_a*60;
    
    if(p_a >= 24)
    {
        p_a -= 24;
        printf("%d %d", p_a, p_b);
    }
    else printf("%d %d", p_a, p_b);
    
}
