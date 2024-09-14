#include<stdio.h>
int main()
{
    int m;
    printf("enter the number of row : ");
    scanf("%d",&m);

    int a = 10;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m-i;j++)
        {
            printf("   ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("%d ",a);
            a = a + 3;
        }
        printf("\n");
    }
   
    return 0;
}