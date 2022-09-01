#include <stdio.h>

float stock_rise_get (int percent, float stock, int my_money);
float stock_fall_get (int percent, float stock, int my_money);

int main(void)
{
    // float QQQ = 300; // 현재 QQQ 주가 : 300달러
    // float stock = 0;
    // int percent = 3; // 오르락 내리락하는 퍼센트
    // float deposit = 300; // 예금도 동일하게 300달러부터 시작
    // float my_stock=0;
    // float my_deposit = 0;

    // printf("========================================\n");
    // printf("QQQ 처음 지수 %0.2f\n\n", QQQ);

    // //올랐을떄
    // stock = QQQ + QQQ * percent / 100;    
    // my_stock += QQQ;
    // my_deposit += deposit;
    // printf("주식오름 -> 예금 : %0.2f, 주식 : %0.2f\n\n", my_deposit, my_stock);

    // //내렸을때
    // // stock = QQQ - QQQ * percent / 100;
    // // stock += QQQ;
    // // my_stock += stock;
    // // my_deposit += deposit; // 예금은 내려도 그대로
    // // printf("주식내림 -> 예금 : %0.2f, 주식 : %0.2f\n\n", my_deposit, my_stock);


    // //올랐을떄
    // stock = QQQ + QQQ * percent / 100;    
    // my_stock += QQQ;
    // my_deposit += deposit;
    // printf("주식오름 -> 예금 : %0.2f, 주식 : %0.2f\n\n", my_deposit, my_stock);
    
    // //올랐을떄
    // stock = QQQ + QQQ * percent / 100;    
    // my_stock += QQQ;
    // my_deposit += deposit;
    // printf("주식오름 -> 예금 : %0.2f, 주식 : %0.2f\n\n", my_deposit, my_stock);
    
    // //올랐을떄
    // stock = QQQ + QQQ * percent / 100;    
    // my_stock += QQQ;
    // my_deposit += deposit;
    // printf("주식오름 -> 예금 : %0.2f, 주식 : %0.2f\n\n", my_deposit, my_stock);
    
    // //올랐을떄
    // stock = QQQ + QQQ * percent / 100;    
    // my_stock += QQQ;
    // my_deposit += deposit;
    // printf("주식오름 -> 예금 : %0.2f, 주식 : %0.2f\n\n", my_deposit, my_stock);
    
    // //올랐을떄
    // stock = QQQ + QQQ * percent / 100;    
    // my_stock += QQQ;
    // my_deposit += deposit;
    // printf("주식오름 -> 예금 : %0.2f, 주식 : %0.2f\n\n", my_deposit, my_stock);
    
    float stock = 300;
    float stock_index = 300;
    float deposit = 300;
    float percent = 3;

    float month_money = 100;
    int month = 1;

    //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 오름
    stock += stock * percent / 100 + month_money;
    printf("주식오름\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index + (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");

    //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 오름
    stock = stock + (stock * percent / 100) + month_money;
    printf("주식오름\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index + (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");

    //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 내림
    stock = stock - (stock * percent / 100) + month_money;
    printf("주식내림\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index - (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");

    //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 오름
    stock = stock + (stock * percent / 100) + month_money;
    printf("주식오름\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index + (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");

    //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 내림
    stock = stock - (stock * percent / 100) + month_money;
    printf("주식내림\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index - (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");

        //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 오름
    stock = stock + (stock * percent / 100) + month_money;
    printf("주식오름\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index + (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");

    //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 내림
    stock = stock - (stock * percent / 100) + month_money;
    printf("주식내림\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index - (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");

        //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 오름
    stock = stock + (stock * percent / 100) + month_money;
    printf("주식오름\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index + (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");

    //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 내림
    stock = stock - (stock * percent / 100) + month_money;
    printf("주식내림\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index - (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");

        //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 오름
    stock = stock + (stock * percent / 100) + month_money;
    printf("주식오름\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index + (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");

    //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 내림
    stock = stock - (stock * percent / 100) + month_money;
    printf("주식내림\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index - (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");

        //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 오름
    stock = stock + (stock * percent / 100) + month_money;
    printf("주식오름\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index + (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");

    //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 내림
    stock = stock - (stock * percent / 100) + month_money;
    printf("주식내림\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index - (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");

        //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 오름
    stock = stock + (stock * percent / 100) + month_money;
    printf("주식오름\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index + (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");

    //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 내림
    stock = stock - (stock * percent / 100) + month_money;
    printf("주식내림\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index - (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");

            //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 오름
    stock = stock + (stock * percent / 100) + month_money;
    printf("주식오름\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index + (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");
            //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 오름
    stock = stock + (stock * percent / 100) + month_money;
    printf("주식오름\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index + (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");
     //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 내림
    stock = stock - (stock * percent / 100) + month_money;
    printf("주식내림\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index - (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");

            //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 오름
    stock = stock + (stock * percent / 100) + month_money;
    printf("주식오름\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index + (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");
            //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 오름
    stock = stock + (stock * percent / 100) + month_money;
    printf("주식오름\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index + (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");
     //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 내림
    stock = stock - (stock * percent / 100) + month_money;
    printf("주식내림\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index - (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");

                //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 오름
    stock = stock + (stock * percent / 100) + month_money;
    printf("주식오름\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index + (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");
            //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 오름
    stock = stock + (stock * percent / 100) + month_money;
    printf("주식오름\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index + (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");
     //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 내림
    stock = stock - (stock * percent / 100) + month_money;
    printf("주식내림\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index - (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");

                //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 오름
    stock = stock + (stock * percent / 100) + month_money;
    printf("주식오름\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index + (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");
            //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 오름
    stock = stock + (stock * percent / 100) + month_money;
    printf("주식오름\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index + (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");
     //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 내림
    stock = stock - (stock * percent / 100) + month_money;
    printf("주식내림\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index - (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");

                //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 오름
    stock = stock + (stock * percent / 100) + month_money;
    printf("주식오름\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index + (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");
            //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 오름
    stock = stock + (stock * percent / 100) + month_money;
    printf("주식오름\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index + (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");
     //n달차
    printf("%d달차, %0.2f 달러 입금 -->> ", month, month_money);
    month += 1;
    //예금
    deposit += month_money;
    //주식 : 3퍼센터 내림
    stock = stock - (stock * percent / 100) + month_money;
    printf("주식내림\n");
    printf("예금 : %0.2f, 주식 : %0.2f\n", deposit, stock);
    stock_index = stock_index - (stock_index * percent /100);
    printf("주가 지수 : %0.2f\n\n", stock_index);

    if (deposit > stock)
    {
        printf("예금 > 주식\n\n");
    }
    else if (deposit < stock)
    {
        printf("예금 < 주식\n\n");
    }
    else printf("예금 = 주식\n\n");
    


    


    return 0;
}



float stock_rise_get (int percent, float stock, int my_money)
{
    float deposit = stock + my_money; // 예금

    stock += stock * percent / 100; // 주식
    //printf("%d 퍼센트 오른 주식은 %0.2f\n", percent, rise);
    
        
    //printf("총 주식은 %0.2f\n", get);
    
    printf("주식오름 -> ");
    printf("예금 : %0.2f, 주식 : %0.2f\n\n", deposit, stock);

    //printf("QQQ지수 : %0.2f\n", prev_stock * (100 + percent)/ 100);

    return stock;
}

float stock_fall_get (int percent, float stock, int my_money)
{
    float prev_stock = stock - my_money;
    if (prev_stock == 301.2)
    {
        prev_stock = stock;    
    }
    else
    {
        prev_stock = stock - my_money;
    }

    stock -= stock * percent / 100;
    //printf("%d 퍼센트 내린 주식은 %0.2f\n\n", percent, fall);
    

    
    float get = stock + my_money;
    //printf("총 주식은 %0.2f\n", get);
    printf("QQQ지수 : %0.2f\n", prev_stock * (100 - percent)/ 100);
    printf("주식내림 -> ");
    printf("예금 : %0.2f, 주식 : %0.2f\n\n", stock + my_money, get);
    return get;
}