#include<stdio.h>
#include<limits.h>

int main()
{
    int arr[5] = {45,45,54,554,7};

    int a = arr[0];

    // int a = INT_MAX;
    
    for(int i=0;i<=4;i++)
    {
        if(a>arr[i]) a = arr[i];
    }

    printf("%d",a);
    return 0;
}