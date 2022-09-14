#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() 
{
    //loop
    //num 11021
    
    int tc = 0; //test case
    int a[1000000] = {0, };
    int b[1000000] = {0, };
    
    //test case / a, b input scanf
    /* 
    scanf("%d", &tc);
    for(int i=0; i<tc; i++)
    {
        scanf("%d %d\n", &a[i], &b[i]);
    }
    */
    
    tc = 5;
    srand(time(NULL));
    for(int i = 0; i < tc; i++)
    {
        a[i] = rand() % 10 +1;
        b[i] = rand() % 10 +1;
    }
    
    printf("%d\n", tc);
    
    if(tc>=0 && tc<=1000000)
    {
        //if((a[]>=1 && a[]<=1000) && (b[]>=1 && b[]<=1000))
        //{
            for(int i = 0; i < tc; i++)
            {
                printf("case #%d: %d\n", i+1, a[i] + b[i]);
            }
        //}
        //else printf("a,b num error");
    }
    else printf("tc num error");
    
    return 0;
}
