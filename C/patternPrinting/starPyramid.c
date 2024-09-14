#include<stdio.h>
int main()
{
    int m;
    printf("enter the number of row : ");
    scanf("%d",&m);

    int nst = 1;
    int nsp = m-1;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=nsp;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=nst;k++)
        {
            printf("* ");
        }
        nst = nst + 2;
        nsp--;
        printf("\n");
    }
   
    return 0;
}