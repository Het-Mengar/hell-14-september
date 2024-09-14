#include<stdio.h>
int main()
{
    int m;
    printf("enter the number of row : ");                                                                     
    scanf("%d",&m);
    int nsp = m/2;
    int nst = 1;
    
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

        if(i<(m/2+1))
        {
            nsp--;
            nst+=2;
        }
        else
        {
            nsp++;
            nst-=2;
        }
        printf("\n");
    }


    return 0;           

}