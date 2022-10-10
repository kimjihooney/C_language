#include <stdio.h>


int main() 
{
    //bit oper
    int num1 = 15; //00000000 00000000 00000000 00001111
    int num2 = 20; //00000000 00000000 00000000 00010100
    
    int And = num1 & num2; //00000000 00000000 00000000 00000100
    
    int Or = num1 | num2; //00000000 00000000 00000000 00011111
    
    int Xor = num1 ^ num2; //00000000 00000000 00000000 00011011
    //같으면 0, 다르면 1 반환
    
    int Not = ~num1; // 11111111 11111111 11111111 11110000
    
    printf("%d\n", And);
    printf("%d\n", Or);
    printf("%d\n", Xor);
    printf("%d\n", Not);
    
    return 0;
}
