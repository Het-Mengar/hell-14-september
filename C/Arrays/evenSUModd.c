#include<stdio.h>
int main()
{
    int arr[7] = {4,6,45,46,35,3,5};
    int a = 0;
    int b = 0;

    for(int i=0;i<=6;i++)
    {
        if(i%2!=0) a += arr[i];
        else b += arr[i];

    }

    printf("%d",b-a);

    return 0;
}