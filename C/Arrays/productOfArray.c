#include<stdio.h>
int main()
{
    int a = 1;
    int arr[5] = {3,66,3,88,35};
    for(int i=0;i<=4;i++)
    {
        a = a * arr[i];
    }
    printf("%d",a);
    return 0;
}