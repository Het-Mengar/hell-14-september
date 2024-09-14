#include<stdio.h>
int main()
{
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i=0;i<4;i++)
    {
        for(int j=i;j<4;j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<4;i++)
    {
       int j = 0;
       int k = 3; //n-1

       while(j<k)
       {
        int temp = arr[i][j];
        arr[i][j] = arr[i][k];
        arr[i][k] = temp;
        j++;
        k--;
       }
    }

    printf("\n");

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}