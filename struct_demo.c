#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    char name[100];
    int age;
    float marks;
};
void main ()
{
    struct student s1;
    strcpy(s1.name,"akshay");
    s1.age = 19;
    s1.marks = 29.9;
    

    struct student s2;
    strcpy(s2.name,"karti");
    s2.age = 19;
    s2.marks = 120;

    struct student s3 = {"madhu",18,99};

    printf("%s\n",s2.name);
    printf("%d",s2.age);
}
