#include<stdio.h>
int main()
{
    int m;
    printf("enter the number of lines : ");
    scanf("%d",&m);

    for(int i = 1;i<=m;i++)
    {
        for(int j=1;j<=i;j++)
        {
            

            if((i+j)%2==0)
            printf("1 ");
            else
            printf("0 ");
        }
        printf("\n");
    }



    //also can do with.......................................


    // int a;
    // for(int i = 1;i<=m;i++)
    // {
    //     if(i%2!=0) a = 1;
    //     else a = 0; 
    //     for(int j=1;j<=i;j++)
    //     {
    //         printf("%d",a);
    //         if(a==1) a = 0;
    //         else a = 1;
    //     }
    //     printf("\n");
    // }


    return 0;
}