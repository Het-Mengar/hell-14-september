#include<stdio.h>
int main()
{
    int m;
    printf("enter the number of lines : ");
    scanf("%d",&m);

    for(int i = 1;i<=m;i++)
    {
        for(int j = 1;j<=i;j++)
        {
        printf("* ");
        }
        printf("\n");
    }
   
}