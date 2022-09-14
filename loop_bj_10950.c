#include <stdio.h>

int main() 
{
    //loop
    //num 10950
    
    int a[10] = {0, };
    int b[10]= {0, };
    
    int test_case;
    
    //scanf("%d", &test_case);
    test_case = 5;
    
    for(int i=0;i<test_case; i++)
    {
        //scanf("%d %d\n", a, b);
        a[i] = i+1;
        b[i] = i+2;
    }
    
    for(int i=0;i<test_case; i++)
    {
        printf("%d\n", a[i]+b[i]);
    }
    
    return 0;
}
