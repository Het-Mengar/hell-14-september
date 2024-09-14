#include<stdio.h>
int main()
{
    int p;
    printf("Plese enter the row of 1st matrix : ");
    scanf("%d",&p);

    int q;
    printf("Plese enter the coulam of 1st matrix : ");
    scanf("%d",&q);

    printf("Enter the elements of 1st matrix ");

    int a[p][q];

    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int r;
    printf("Plese enter the row of 2nd matrix : ");
    scanf("%d",&r);

    int s;
    printf("Plese enter the coulam of 2nd matrix : ");
    scanf("%d",&s);

    printf("Enter the elements of 2nd matrix ");

    int b[r][s];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<s;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("\n");

    if(q!=r)
    {
        printf("the multiplication of these both matrix is not possible.");
    }
    else
    {
        int ans[p][s];

        for(int i=0;i<p;i++)
        {
            for(int j=0;j<s;j++)
            {
                ans[i][j] = 0;

                for(int k=0;k<q;k++)
                {
                    ans[i][j] += a[i][k]*b[k][j]; 
                }
                
            }
        }

        for(int i=0;i<p;i++)
        {
            for(int j=0;j<s;j++)
            {
                printf("%d  ",ans[i][j]);
            }

            printf("\n");

        }

    }

    return 0;
}