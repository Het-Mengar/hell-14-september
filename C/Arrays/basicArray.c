#include<stdio.h>
int main()
{
    int arr[5] = {2,6,7,5,5};
    arr[4] = 100;
    printf("%d",arr[4]);

    float brr[3] = {1,2.3,5.9};
    printf("\n%f",brr[0]);

    char crr[4] = {'a','g','&','*'};
    printf("\n%c\n",crr[3]);

    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("Enter the element no %d : ",i+1);
        scanf("\n%d",&a[i]);
    }

    for(int i=0;i<=n-1;i++)
    {
        printf("\nyour number is = %d",a[i]);
        
    }

    return 0;
}