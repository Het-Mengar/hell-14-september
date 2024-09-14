#include<stdio.h>

// It's space complacity is O(n).

int main()
{
    int arr[] = {0,0,85,65,32,0,7,46,0};
    int ans[9];
    int n = 9;
    int index = 0;

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    for(int i=0;i<n;i++)
    {
        if(arr[i] != 0)
        {
            ans[index] = arr[i];
            index++;
        }
    }

    while(index <= n-1)
    {
        ans[index] = 0;
        index++;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",ans[i]);
    }


    return 0;
}