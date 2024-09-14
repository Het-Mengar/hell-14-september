#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines : ");
    scanf("%d",&n);
    
    int a = 1;
    for(int i=1;i<=2*n-1;i++)
    {
        printf("%d ",a);
        if(i<n) a++;
        else a--;
    }

    printf("\n");

    int m = n-1;
    int num = m;
    int nsp = 1;

    for(int i=1;i<=m;i++)
    {
        int b = num;
        for(int j=1;j<=num;j++)
        {
            printf("%d ",j);
        }
        
        for(int k=1;k<=nsp;k++)
        {
            printf("  ");
        }

        for(int j=1;j<=num;j++)
        {
            printf("%d ",b);
            b--;
        }

        num--;
        nsp+=2;

        printf("\n");

    }

    return 0;

}