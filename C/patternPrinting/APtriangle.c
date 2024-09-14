#include<stdio.h>
int main()
{
    int m;
    printf("enter the number of lines : ");
    scanf("%d",&m);

    // for(int i = 1;i<=m;i++)
    // {
    //     for(int j=1;j<=(i*2);j=j+2)
    //     {
    //     printf("%d ",j);
    //     }
    //     printf("\n");
    // }

    
    //Or second method....................................

    for(int i =1;i<=m;i++)
    {
        int a = 1;
        for(int j = 1;j<=i;j++)
        {
        printf("%d ",a);
        a = a+2;
        }

        printf("\n");
    }

    return 0;
}