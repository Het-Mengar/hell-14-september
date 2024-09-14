#include<stdio.h>
int main()
{
    int m;
    printf("enter the number of lines : ");
    scanf("%d",&m);

    for(int i = 1;i<=m;i++)
    {
        for(int j=65;j<=m+64;j++)
        {
            char ch = (char)j;
            printf("%c ",ch);
        
        }
        printf("\n");
    }
    //also we can do with varriable.....................
    return 0;
}