#include<stdio.h>
int main()
{
    int m;
    printf("enter the number of row : ");
    scanf("%d",&m);

    int n;
    printf("enter the number collan : ");
    scanf("%d",&n);

    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || j==1 || i==m || j==n)
            {
                printf("* ");
            }
           
            else
            {
                printf("  ");
            }
        
        }
        printf("\n");
    }
    return 0;
}