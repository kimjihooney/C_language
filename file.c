#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



#define MAX 10000

int main(void)
{
    //파일 입출력
    //파일에 어떤 데이터를 저장
    //파일에 저장된 데이터를 불러오기

    //fputs, fgets
    char line[MAX]; 

    //파일에 쓰기
    // FILE * file = fopen("C:\\test\\test1.txt", "wb"); 
    // //r(읽기) w(쓰기) a(append이어쓰기)
    // //t(text), b(binary)
    // if (file == NULL)
    // {
    //     printf("파일 열기 실패\n");
    //     return 1;
    // }

    // fputs("fputs를 이용해서 글을 적어볼게요\n", file);
    // fputs("잘 적히는지?\n", file);

    //파일 읽기
    // FILE * file = fopen("C:\\test\\test1.txt", "rb"); 
    // // r(읽기) w(쓰기) a(append이어쓰기)
    // //t(text), b(binary)
    // if (file == NULL)
    // {
    //     printf("파일 열기 실패\n");
    //     return 1;
    // }

    // while(fgets(line, MAX, file) != NULL)
    // {
    //     printf("%s", line);
    // }
    //fclose(file); //항상 파일 닫아주는 습관을 들여주자



    //fprintf, fscanf
    
    //파일 쓰기
    // int num[6] = {0, };
    // int bonus = 0;
    // char str1[MAX];
    // char str2[MAX];
    // FILE *file = fopen("c:\\test\\test2.txt", "wb");

    // if(file == NULL)
    // {
    //     printf("파일 열기 실패\n");
    //     return 1;
    // }

    // //로또 추첨 번호 저장
    // fprintf(file, "%s %d %d %d %d %d %d\n", "추첨번호 ", 1, 2, 3, 4, 5, 6);
    // fprintf(file, "%s %d\n", "보너스번호 ", 7);

    //파일 읽기

    int num[6] = {0, };
    int bonus = 0;
    char str1[MAX];
    char str2[MAX];

    FILE *file = fopen("c:\\test\\test2.txt", "rb");    
    if(file == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }
    fscanf(file, "%s %d %d %d %d %d %d",str1, 
        &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);

    printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);

    fscanf(file, "%s %d\n",str2, &bonus);
    printf("%s %d\n", str2, bonus);

    fclose(file);



    return 0;
}