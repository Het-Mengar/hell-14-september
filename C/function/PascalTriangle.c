#include<stdio.h>

int fect(int x)
{
    int fect = 1;
    for(int i=2;i<=x;i++)
    {
        fect = fect*i;
    }
    return fect;
}

int combination(int a,int b)
{
    int comb = fect(a)/(fect(b)*fect(a-b));
    return comb;
}

int main()
{
    int n;
    printf("enter the line number : ");
    scanf("%d",&n);
    
    for(int i=0;i<=n-1;i++)
    {
        for(int k=1;k<=(n-i)-1;k++)
        {
            printf("  ");
        }

        for(int j=0;j<=i;j++)
        {
            

            printf("%d   ",combination(i,j));
        }
        printf("\n");
    }

    return 0;

}