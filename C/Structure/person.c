#include<stdio.h>
#include<string.h>
int main()
{
    struct person
    {
        char name[20];
        int age;
        int salary;
    }b;

    struct person a;
    strcpy(a.name,"mukesh");
    a.age = 18;
    a.salary = 500000;

    strcpy(b.name,"mohan");
    b.age = 25;
    b.salary = 800000;

    printf("%s\n%d",a.name,b.age);


    return 0;
}