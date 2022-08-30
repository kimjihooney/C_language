#include <stdio.h>

void print_stock (int parm_QQQ, int parm_QLD, int parm_TQQQ);



int main(void)
{
    int QQQ = 1000;
    int QLD = 1000;
    int TQQQ = 1000;

    int leverage[3] = {1000, 1000, 1000};

    int percent = 10;
    //up -> stock_rise
    //down -> stock_fall

    //stock_rise(10, QQQ, QLD, TQQQ);

    // QQQ = QQQ + (QQQ * percent / 100);
    // QLD = QLD + (QLD * percent * 2 / 100);
    // TQQQ = TQQQ + (TQQQ * percent * 3 / 100);

    // QQQ = QQQ - (QQQ * percent / 100);
    // QLD = QLD - (QLD * percent * 2 / 100);
    // TQQQ = TQQQ - (TQQQ * percent * 3 / 100);

   

    QQQ = QQQ - (QQQ * percent / 100);
    QLD = QLD - (QLD * percent * 2 / 100);
    TQQQ = TQQQ - (TQQQ * percent * 3 / 100);

    print_stock(QQQ, QLD, TQQQ);

    QQQ = QQQ + (QQQ * percent / 100);
    QLD = QLD + (QLD * percent * 2 / 100);
    TQQQ = TQQQ + (TQQQ * percent * 3 / 100);

    print_stock(QQQ, QLD, TQQQ);

    

    return 0;
}

void print_stock (int parm_QQQ, int parm_QLD, int parm_TQQQ)
{
    printf("QQQ = %d\n", parm_QQQ);
    printf("QLD = %d\n", parm_QLD);
    printf("TQQQ = %d\n", parm_TQQQ);
    printf("끝\n\n");
}
