#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of line : ");
    scanf("%d",&n);

    for(int i=65;i<=64+(2*n-1);i++)
    {
        char ch = (char)i;
        printf("%c ",ch);
    }

    printf("\n");

    int m = n-1;
    int nst = m;
    int nsp = 1;

    for(int i=1;i<=m;i++)
    {
        int a = 65;
        char ch = (char)a;

        for(int j=1;j<=nst;j++)
        {
            printf("%c ",ch);
            a++;
            ch = (char)a;
        }

        for(int k=1;k<=nsp;k++)
        {
            printf("  ");
            a++;
            ch = (char)a;
        }

        for(int j=1;j<=nst;j++)
        {
            printf("%c ",ch);
            a++;
            ch = (char)a;
        }

        nsp+=2;
        nst--;

        printf("\n");

    }

    return 0;

}