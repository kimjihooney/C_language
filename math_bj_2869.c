#include <stdio.h>

int main() {
    //math_bj_2869.c
    int V, A, B, day;
    
    scanf("%d %d %d", &A, &B, &V);
    
    int answer;
    int q = ((V-A) / (A-B));
    double r = ((V-A) % (A-B));
    
    if(r==0){
        answer = (q + 1);
    }else{
        answer = (q + 1) +1 ;
    }
    
    
    printf("%d\n", answer);
    
    return 0;
}
