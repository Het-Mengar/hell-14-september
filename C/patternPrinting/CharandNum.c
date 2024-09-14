#include<stdio.h>
int main()
{
    int m;
    printf("enter the number of lines : ");
    scanf("%d",&m);

    for(int i = 1;i<=m;i++)
    {
        if(i%2==0)
        {
            for(int j=65;j<=i+64;j++)
            {
                char ch = (char)j;
                printf("%c ",ch);
            }
            printf("\n");
        }
        else
        {
            for(int j=1;j<=i;j++)
            {
            
                printf("%d ",j);
            }
            printf("\n");
        }
    }
    
    return 0;
}