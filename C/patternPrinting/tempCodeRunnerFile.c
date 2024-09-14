#include<stdio.h>
int main()
{
    int m;
    printf("enter the number : ");
    scanf("%d",&m);

    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i==(m+1)/2 || j == (m+1)/2)
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