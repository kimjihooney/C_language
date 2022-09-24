#include <stdio.h>
#define len 10000000

int find_block(int p_x);
int return_sum(int p_x);
    
void find_fraction(int p_x, int p_block, int p_sum);

int main() 
{
    //math_bj_1193.c
    int X;
    
    scanf("%d", &X);
    
    if(X == 1){
        printf("1/1\n");
        return 0;
    }
    int block;
    int sum;
    
    block = find_block(X);
    sum = return_sum(X);
    
    if(block == -1)
    {
        printf("Find_block trouble\n");
    }
    
    find_fraction(X, block, sum);
    
    return 0;
}

int find_block(int p_x)
{
    int block = 1;
    
    //sum block 1+2+3+...
    if(p_x == 1)
    {
        return 1;
    }
    else
    {
        for(int i = 2; i < len; i++)
        {
            block += i;
        
            if(p_x <= block)
            {
                block = i;
                //p_x는 i번째 block의 숫자다
                //printf("find block func is %d\n", block);
                return block;
            }
        }
    }
    
    return -1;
}


int return_sum(int p_x)
{
    int block_sum = 1;
    
    for(int i = 2; i < len; i++)
    {
        block_sum += i;
        
        if(p_x <= block_sum)
        {
            block_sum -= i;
            //printf("sum func is %d\n", block_sum);
            return block_sum;
        }
    }
}

void find_fraction(int p_x, int p_block, int p_sum)
{
    int num; //block안의 번째수
    int numerator;
    int denominator;
    
    num = p_x - p_sum;
    
    if(p_block % 2 == 1) // 홀수
    {
        numerator = p_block - num + 1;
        denominator = num;
        printf("%d/%d\n", numerator, denominator);
    }
    else if(p_block % 2 == 0) //짝수
    {
        numerator = num;
        denominator = p_block - num + 1;
        printf("%d/%d\n", numerator, denominator);
    }
    else printf("find_fraction func error\n");
}


