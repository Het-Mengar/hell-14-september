#include<stdio.h>
int main()
{
    int m;
    printf("enter the number of row : ");
    scanf("%d",&m);

    int a = 1;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m-i;j++)
        {
            printf("  ");
        }
        for(int k=65;k<=a+64;k++)
        {
            char ch = (char)k;
            printf("%c ",ch);
            
        }
        a = a + 2;
        printf("\n");
    }
   
    return 0;
}