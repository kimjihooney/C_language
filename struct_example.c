#include <stdio.h>
#include <string.h>

struct student_ex_tag{
    int age;
    char addr[256];
};

struct student_basic_tag{
    int number;
    char name[50];
    char birth[30];
    struct student_ex_tag std_ex;
};

typedef struct rectangle{
    int x;
    int y;
    int height;
    int width;
} RECT;

int main(void)
{
    struct student_basic_tag student;
    struct student_basic_tag* p_student;

    RECT rect1 = {10,20,30,40};

    RECT rect_array[3] = {
        {10,11,12,13},
        {20,21,22,23},
        {30,31,32,33}
        };
    int i = 1;

    student.number = 202101;
    strcpy(student.name , "KJH");
    strcpy(student.birth, "2023.01.01");
    student.std_ex.age = 22;
    strcpy(student.std_ex.addr, "seoul");

    printf("number = %d\n", student.number);
    printf("name = %s\n", student.name);
    printf("birth = %s\n", student.birth);
    printf("age = %d\n", student.std_ex.age);
    printf("addr = %s\n", student.std_ex.addr);

    p_student = &student;

    printf("number = %d\n", p_student->nunmber);
    printf("name = %s\n", p_student->name);
    printf("birth = %s\n", p_student->birth);
    printf("age = %d\n", p_student.std_ex->age);
    printf("addr = %s\n", p_student->std_ex.addr);

    return 0;
}
