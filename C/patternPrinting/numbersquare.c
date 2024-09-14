#include<stdio.h>
int main()
{
    int m;
    printf("enter the number  : ");
    scanf("%d",&m);

    for(int i = 1;i<=m;i++)
    {
        for(int j = 1;j<=m;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    
}