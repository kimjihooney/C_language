#include <stdio.h>
#include <string.h>


int main() 
{
    //string_bj_2675.c
    
    int T; //test case
    int R;  //repeat count
    char str[20];
    //"////XYZ\\$%*+ -./:/"; //string
    
    //test case input
    scanf("%d", &T);
    //T=1;
    
    for(int i = 0 ; i < T; i++)
    {
        //R input 
        scanf("%d %s", &R, str);
  
            for(int j = 0; j < strlen(str); j++)
            {
                if(str[j] != NULL)
                {
                    for(int k = 0; k < R; k++)
                    {
                        printf("%c", str[j]);
                    }
                }
                else break;
            }
            printf("\n");
        
    }
    
    return 0;
}
