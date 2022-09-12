#include <stdio.h>

int main() 
{
    //loop
    //num 25304
    
    int total_price = 0;
    int cal_price=0;
    
    int N = 0;
    
    int price[100] = {0, }; 
    int ea[100] = {0, };
    
    //scanf("%d", &total_price);
    total_price = 4000;
    
    //scanf("%d", &N);
    N = 4;
    
    for(int i =0; i<N; i++)
    {
        //scanf("%d", price[i]);
        //scanf("%d", ea[i]);
        price[i] = 1000;
        ea[i] = 1;
        
        cal_price += price[i]*ea[i];
        //printf("%d : %d\n", i, cal_price);
    }
    
    
    
    if(cal_price == total_price)
    {
        printf("YES\n");
    }
    else if(cal_price != total_price)
    {
        printf("NO\n");
    }
    else printf("error\n");
    
    
    return 0;
}
