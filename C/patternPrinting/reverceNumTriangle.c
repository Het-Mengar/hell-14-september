#include<stdio.h>
int main()
{
    int m;
    printf("enter the number of lines : ");
    scanf("%d",&m);

    int a = m;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=a;j++)
        {
        printf("%d ",j);
        }
        a--;
        printf("\n");
    }
    return 0;
}