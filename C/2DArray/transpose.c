#include<stdio.h>
int main()
{                                                                                         
    int arr[4][3] = {1,2,4,8,0,3,5,0,1,2,7,6};
    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int brr[3][4];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            brr[i][j] = arr[j][i];
        }
        
    }

    printf("\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}