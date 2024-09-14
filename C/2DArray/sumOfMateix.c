#include<stdio.h>
int main()
{
    int arr[3][2] = {1,2,3,4,5,6};
    int brr[3][2] = {10,20,30,40,50,60};
    int crr[3][2];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr[i][j] += brr[i][j];
            printf("%d ",arr[i][j]);
        }
        printf("\n");
       
    }
    
    return 0;
}