#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() 
{
    //loop
    //num 10952
    
    int a[9] = {0, }; //1~9
    int b[9] = {0, }; //1~9
    
    // for(int i=0; i<9; i++)
    // {
    //     scanf("%d %d", &a[i], &b[i]);
    //     if(a[i] == 0 && b[i] == 0)
    //     {
    //         break;
    //     }
    // }
    
    srand(time(NULL));
    for(int i=0; i<9; i++)
    {
        a[i] = rand() % 10 +1;
        b[i] = rand() % 10 +1;
    }
    a[6] = 0;
    b[6] = 0;
    
    for(int i=0; i<9; i++)
    {
        if(a[i]+b[i] != 0)
        {
            printf("%d\n", a[i]+b[i]);
        }
        else break;
    }
    
    return 0;
}
