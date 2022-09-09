#include <stdio.h>
#include <stdlib.h>

int check_quadrant(int p_x, int p_y);

int main() {
    // if_BJ
    // num 14681
    
    int x;
    int y;
    
    int quadrant;
    
    x = 9;
    y = -13;
    
    //scanf("%d", &x);
    //scnaf("%d", &y);
    
    if(abs(x) <= 1000 && abs(y) <= 1000)
    {
        quadrant = check_quadrant(x, y);
        printf("%d", quadrant);
    }
    else
    {
        printf("input error\n");
    }
    
    
    return 0;
}

int check_quadrant(int p_x, int p_y)
{
    if(p_x > 0 && p_y > 0)
    {
        return 1;
    }
    else if(p_x < 0 && p_y > 0)
    {
        return 2;
    }
    else if(p_x < 0 && p_y < 0)
    {
        return 3;
    }
    else if(p_x > 0 && p_y < 0)
    {
        return 4;
    }
    else
    {
        printf("(0,0)\n\n");
        return 0;
    }
}
