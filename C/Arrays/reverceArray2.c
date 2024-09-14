#include<stdio.h>
// if you don't use another array.............

void reverce(int arr[])
{
    // int i = 0;
    // int j = 6;
    // int temp;

    // while(i<j)
    // {
    //     temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;

    //     i++;
    //     j--;
    // }

//''''''''''''''''''''''''''''''''OR'''''''''''''''''''''''''''
    int temp;
    for(int i=0,j=6;i<j;i++,j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

    }

    return;
}
int main()
{
    int arr[7] = {4,6,45,46,35,3,5};

    reverce(arr);

    for(int i=0;i<=6;i++)
    {
        printf("\n%d",arr[i]);
    }
    
    
    return 0;
}