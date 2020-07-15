#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{

    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Avishek");
    strcpy(student1.major, "Science");
    printf("So your name is %s\n", student1.name);
    printf("And you have majored in %s\n", student1.major);
    printf("And your age is %d and you gpa is %f\n", student1.age, student1.gpa);

    return 0;
}
