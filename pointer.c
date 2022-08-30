#include <stdio.h>

int main(void)
{
    // // 포인터

    // // [tom] ; 101호
    // // [james] ; 201호
    // // [brian] ; 301호

    // int tom = 1;
    // int james = 2;
    // int brian = 3;

    // printf("tom addr : %d, password : %d\n", &tom, tom);
    // printf("james addr : %d, password : %d\n", &james, james);
    // printf("brian addr : %d, password : %d\n", &brian, brian);

    // //미션맨
    // // 첫번째 미션 : 아파트의 각 집에 방문하여 문에 적힌 암호 확인
    
    // int * m_man;

    // m_man = &tom;
    // printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", m_man, *m_man);

    // m_man = &james;
    // printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", m_man, *m_man);

    // m_man = &brian;
    // printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n\n", m_man, *m_man);

    // //2nd mission : X 3

    // m_man = &tom;
    // *m_man = *m_man * 3; //포인터는 주소값을 찾아가서 그 안의 값을 바꿀수도 있다.
    // printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", m_man, *m_man);

    // m_man = &james;
    // *m_man = *m_man * 3; //포인터는 주소값을 찾아가서 그 안의 값을 바꿀수도 있다.
    // printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", m_man, *m_man);

    // m_man = &brian;
    // *m_man = *m_man * 3; //포인터는 주소값을 찾아가서 그 안의 값을 바꿀수도 있다.
    // printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n\n", m_man, *m_man);

    // // spy
    // // -2

    // int * spy = m_man; //spy = m_man이 됨
    // printf("%d, %d,\n", spy, *spy);
    // printf(" spy \n\n");

    // spy = &tom;
    // *spy = *spy -2; // tom = tom -2;
    // printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", spy, *spy);

    // 배열?
    // int arr[3] = {5, 10, 15};
    // int *ptr = arr;
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%d = %d\n", arr[i], ptr[i]);
    // }


    // ptr[0] = 100;
    // ptr[1] = 200;
    // ptr[2] = 300;
    // //포인터를 바꾸면 배열도 바꿈
    // //ptr과 arr은 똑같다 *ptr = arr 하면 같아진다.
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%d = %d\n", *(arr + i), ptr[i]);
    //     //arr로 부터 +i의 주소값의 포인터 값을 가져온다. arr은 단지 주소값
    //     //printf("%d = %d\n", arr[i], ptr[i]);
    // }
    // // *(arr + i) == arr[i] == *(ptr + i)

    // int test[3] = {0, 1, 2};
    // int *p_test = test;

    // for( int i = 0; i < 3; i++)
    // {
    //     printf("%d,\n %d,\n %d,\n %d,\n %d\n", test[i], p_test[i], *(test +i), *(p_test +i), *&test[i]);
    // }

    // *& 는 아무것도 없는 것과 같다.
    // & 는 주소이며, *는 주소의 값이기 떄문에


    return 0;
}