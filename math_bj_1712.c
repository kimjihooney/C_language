#include <stdio.h>

#define sales 2200000000

long long break_even_point( long long p_a,  long long p_b,  long long p_c);

int main(void)
{
    //math_bj_1712.c
     long long A, B, C;
    // A는 고정 비용
    // B는 가변 비용
    // C는 판매 비용

     long long print;

    scanf("%d %d %d", &A, &B, &C);

    print = break_even_point(A, B, C);

    printf("%d", print);

    return 0;
}


 long long break_even_point( long long p_a,  long long p_b,  long long p_c)
{
     long long ea; // 판매 대수

    // A + B*ea < C * ea -> 손익 분기점 발생
    // ea = A / C-B

    if(p_b >= p_c) return -1; 

    ea = p_a / (p_c - p_b);
    ea++;

    return ea;






    //long long ret = -1;

    // for(ea = 1; ea < sales; ea++)
    // {
    //     long long total_cost = p_a + p_b * ea;
    //     long long earn = p_c * ea;
    //     if(p_b > p_c) return ret;
    //     else if(earn > total_cost) return ea;      
        
    // }

    // return ret;

}