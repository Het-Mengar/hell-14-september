#include<stdio.h>

void rotation(int arr[],int a,int b)
{
    int temp;
    for(int i=a,j=b;i<j;j--,i++)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

    }
    return;
}

int main()
{

    int n = 8;
    int arr[8] = {1,2,3,4,5,6,7,8};

    int k;
    printf("Enter the number of roatation : ");
    scanf("%d",&k);

    k = k%n;

    rotation(arr,0,n-1);
    rotation(arr,0,k-1);
    rotation(arr,k,n-1);

    for(int i=0;i<=n-1;i++)
    {
        printf("%d  ",arr[i]);
    }

    return 0;
}