#include <stdio.h>
//#include <stdlib.h>


int main() {
    // if_BJ
    // num 2884
    
    int h; //hour
    int m; //minute
    int time_m; // converting minute time
    
    
    //scanf("%d", &h);
    //scanf("%d", &m);
    h = 23;
    m = 40;
    
    time_m = h*60 + m;
    
    time_m -= 45;
    
    h = time_m / 60;
    m = time_m - h*60;
    
    if(time_m > 0)
    {
        printf("%d %d\n", h, m);
    }
    
    else
    {
        time_m += 1440;
        h = time_m / 60;
        m = time_m - h*60;
        printf("%d %d\n", h, m);
    }
    
    
    return 0;
}
