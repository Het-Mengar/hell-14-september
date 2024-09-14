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
    printf("\n");

    int a[p][q];

    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            if(j%2==0)
            printf("%d ",a[j][i]);
            else
            { 
                printf("%d ",a[p-i-1][p-i-1]);
            }
        }
        printf("\n");
    }

    return 0;

}