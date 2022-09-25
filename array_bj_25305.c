#include <stdio.h>

int get_cutline(int N, int k, int *x);
//void get_prize(int N, int k, int *x, int cutline);

int main() 
{
    //array_bj_25305.c
    
    int N;
    int k;
    
    scanf("%d %d", &N, &k);
    
    int x[N];
    
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &x[i]);
    }
    
    
    int cutline;
    
    cutline = get_cutline(N, k, x);
    
    printf("%d\n", cutline);
    
    //get_prize(N, k, x, cutline);
    
    
    
    return 0;
}

int get_cutline(int N, int k, int *x)
{
    int cut;
    int temp;
    
    for(int i = 0; i < N-1; i++)
    {
        for(int j = 0; j < N-1; j++)
        {
            if(x[j] < x[j+1])
            {
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }
    
    cut = x[k-1];
    
    return cut;
}

