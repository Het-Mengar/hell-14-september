#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0;i<=4;i++)
    {
        printf("enter the element no %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int j=4;j>=0;j--)
    {
        printf("%d\n",arr[j]);
    }
    return 0;
}