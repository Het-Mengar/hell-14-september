#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct student
{
    int rollNo;
    char Department[20];
    int Joiningyear;

}student;

void compare(student s1,student s2)
{
    bool flag = true;

    int n = strlen(s1.Department);
    int m = strlen(s2.Department);

    if(m<n) m=n;

    
    for(int i=0;i<m;i++)
    {
        if(s1.Department[i]!=s2.Department[i])  flag = false;
    }

    if(flag==true) printf("they both belong two same department");
    else printf("they both belong different department");

    //also can............
    // int x = strcmp(s1.Department,s2.Department);
    // if(x==0) printf("they both belong two same department");
    // else printf("they both belong different department");
    
    return;
}

int main()
{
    student ram;
    ram.rollNo = 55;
    ram.Joiningyear = 2015;
    strcpy(ram.Department,"computer science");

    student shyam; 
    shyam.rollNo = 25;
    shyam.Joiningyear = 2015;
    strcpy(shyam.Department,"computer science");

    compare(ram,shyam);
    
    return 0;
}