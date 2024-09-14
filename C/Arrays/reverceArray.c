#include<stdio.h>
int main()
{
    int arr[7] = {4,6,45,46,35,3,5};
    int brr[7];
    
    for(int i=0;i<=6;i++)
    {
        brr[i] = arr[6-i];
        j++;
    }
    
    for(int i=0;i<=6;i++)
    {
        printf("\n%d",brr[i]);
    }

    return 0;
}