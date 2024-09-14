#include<stdio.h>
int main()
{
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,12,13,14,15,16};
    
    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i=1;i<=2;i++)
    {
        for(int j=1;j<=2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    int sum = 0;
    
    for(int i=1;i<3;i++)
    {
        for(int j=1;j<3;j++)
        {
            sum += arr[i][j];
            
        }
       
    }

    printf("%d",sum);
    
    return 0;
}