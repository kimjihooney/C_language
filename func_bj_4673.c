#include <stdio.h>
#define range 100

int d_num_db(int p_num);
int check_self_num(int p_self_num);

int main(void)
{
    //func_bj_4673.c
    
    int self_num;
    int flag;

    int num_db[range] = {0,};

    //d(n)에 대한 모든 데이터를 배열에 저장
    for(int i = 1; i <= range; i++)
    {
        num_db[i] = d_num_db(i);
        printf("%d - %d\n", i, num_db[i]);
    }
    

    //1~10000까지 숫자를 d(n)데이터베이스와 비교하며 self number 검출
    for(self_num = 1; self_num <= range; self_num++)
    {
        for(int i = 1; i <= range; i++)
        {
            flag = 1;
            if(num_db[i] == self_num)
            {
                // printf("(%d번째)", i);
                // printf("%d = ", self_num);
                // printf("%d\n", num_db[i]);
                //printf("%d는 셀프넘버 아님\n", self_num);
                
            }
            if(num_db[i] != self_num)
            {
                //printf("%d\n", num_db[i]);
            }
            
        }

    }

    // for(int i = 1; i <= range; i++)
    // { 
    //     for(self_num = 1; self_num <= range; self_num++)
    //     {
    //         if(num_db[i] == self_num)
    //             {
    //                 break;
    //             }
    //         else
    //         {
    //             printf("%d\n", self_num);
    //             break;
    //         }
    //     }
    // }
    
   

    return 0;
}

int d_num_db(int p_num)
{
    int num;
    int d_num;
    //int check_flag;
    //int d_num_db[10000] = {0,};

    for(int i = 0; i < p_num; i++)
    {
        //1자리수
        if(p_num > 0 && p_num < 10)
        {
            d_num = p_num + (p_num % 10);
            
        }
        //2자리수
        else if(p_num > 9 && p_num < 100)
        {
            d_num = p_num + (p_num / 10) + (p_num % 10);
        }
        //3자리수
        else if(p_num > 99 && p_num < 1000)
        {
            d_num = p_num + (p_num / 100) + ((p_num - ((p_num/100)*100)) / 10) + (p_num % 10);
            // 111 = 111 + (111/100) + ((111-((111/100)*100)) / 10) 
            // 111 = 111 + 1 + 1 + 1 
        }
        //4자리수
        else if(p_num > 999 && p_num < 10000)
        {
            d_num = p_num + (p_num / 1000) + ((p_num - ((p_num/1000)*1000)) / 100) + ((p_num - ((p_num/100)*100)) / 10) + (p_num % 10);
            // 1111 = 1111 + 1 + ((1111 - ((1111/1000)*1000))/100) + ((1111 - ((1111/100)*100)) / 10) 
            // 1111 = 1111 + 1 + 1 + 1 +1 
        }
        //else printf("db error\n");
    }
    return d_num;
}