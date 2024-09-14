// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the line number : ");
//     scanf("%d",&n);

//     for(int i=1;i<=2*n-1;i++)
//     {
//         printf("%d ",i);
//     }

//     printf("\n");

//     int m = n - 1;
//     int nsp = 1;
//     int num1 = m;
//     int x = n+1;

//     for(int i=1;i<=m;i++)
//     {
//         int a = x;

//         for(int j=1;j<=num1;j++)
//         {
//             printf("%d ",j);
//         }
       

//         for(int k=1;k<=nsp;k++)
//         {
//             printf("  ");
//         }
        

//         for(int l=1;l<=num1;l++)
//         {
//             printf("%d ",a);
//             a++;
//         }

//         nsp+=2;
//         num1--;
//         x++;

//         printf("\n");
//     }

//     return 0;
// }


// this is easy method....................................... 



#include<stdio.h>
int main()
{
    int n;
    printf("enter the line number : ");
    scanf("%d",&n);

    for(int i=1;i<=2*n-1;i++)
    {
        printf("%d ",i);
    }

    printf("\n");

    int m = n - 1;
    int nsp = 1;
    int num = m;
    

    for(int i=1;i<=m;i++)
    {
        int a = 1;

        for(int j=1;j<=num;j++)
        {
            printf("%d ",a);
            a++;
        }
       

        for(int k=1;k<=nsp;k++)
        {
            printf("  ");
            a++;
        }
        

        for(int l=1;l<=num;l++)
        {
            printf("%d ",a);
            a++;
        }

        nsp+=2;
        num--;
        

        printf("\n");
    }

    return 0;
}