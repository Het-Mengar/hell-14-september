#include<stdio.h>
int main()
{
    int m;
    printf("enter the number of lines : ");
    scanf("%d",&m);

    for(int i = 1;i<=m;i++)
    {
        for(int j=1;j<=(m*2-1);j=j+2)
        {
        printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}