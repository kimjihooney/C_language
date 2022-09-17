#include <stdio.h>

int main() 
{
    //string_bj_2908.c
    
    int num_1;
    int num_2;
    
    scanf("%d", &num_1);
    scanf("%d", &num_2);
    
    int n1_1;
    int n1_10;
    int n1_100;
    
    int n2_1;
    int n2_10;
    int n2_100;
    
    n1_1 = num_1 %10;
    n1_100 = num_1 /100;
    n1_10 = (num_1 /10) %10;
    
    n2_1 = num_2 %10;
    n2_100 = num_2 /100;
    n2_10 = (num_2 /10) %10;
    
    num_1 = n1_100 + n1_10 *10 + n1_1 *100;
    num_2 = n2_100 + n2_10 *10 + n2_1 *100;
    
    if(num_1 > num_2)
    {
        printf("%d\n", num_1);
    }
    else printf("%d\n", num_2);
    
    return 0;
}

