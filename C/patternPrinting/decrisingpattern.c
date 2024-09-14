#include<stdio.h>
int main()
{
    int m;
    printf("enter the number of lines : ");
    scanf("%d",&m);

    // for(int i = m;i>=1;i--)
    // {
    //     for(int j = 1;j<=i;j++)
    //     {
    //     printf("* ");
    //     }
    //     printf("\n");
    // }


    //OR you can do this............................

    int a = m;
    for(int i = 1;i<=m;i++)
    {
        
        for(int j = 1;j<=a;j++)
        {
        printf("* ");
        }
        a--;
        printf("\n");
    }


   
}