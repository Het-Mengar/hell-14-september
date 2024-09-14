#include<stdio.h>
#include<string.h>

int main()
{
    typedef struct student
    {
        char name[15];
        int rollNumber;
        int marks;
        char grade;
        
    }student;

    student arr[3];

    for(int i=0;i<3;i++)
    {
        scanf("%s",arr[i].name);
        scanf("%d\n",&arr[i].rollNumber);
        scanf("%d\n",&arr[i].marks);
        scanf("%c",&arr[i].grade);
    }

    for(int j=0;j<3;j++)
    {
        printf("name : %s\n",arr[j].name);
        printf("roll Number : %d\n",arr[j].rollNumber);
        printf("marks : %d\n",arr[j].marks);
        printf("grade : %c\n",arr[j].grade);
        printf("\n");
    }
    
    return 0;
}