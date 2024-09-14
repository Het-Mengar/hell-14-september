#include<stdio.h>
int main()
{
    int r;
    printf("enter the row number : ");
    scanf("%d",&r);

    int c;
    printf("enter the colan number : ");
    scanf("%d",&c);

    int arr[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int sum = 0;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum += arr[i][j];
        }
    }

    printf("%d",sum);

    return 0;
}    