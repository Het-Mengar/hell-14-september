#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of line : ");
    scanf("%d",&n);

    int m = n - 1;
    int nsp = 1;
    int nst = m;
    

    for(int o=1;o<=2*m+1;o++)
    {
        printf("* ");
    }

    printf("\n");

    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=nst;j++)
        {
            printf("* ");
        }

        for(int k=1;k<=nsp;k++)
        {
            printf("  ");
        }

        for(int j=1;j<=nst;j++)
        {
             printf("* ");
        }

        nsp+=2;
        nst--;
        

        printf("\n");
    }

    return 0;
}