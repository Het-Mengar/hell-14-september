#include<stdio.h>
int main()
{
    int arr[] = {0,0,85,65,32,0,7,46,0};
    int n = 9;

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    for(int i=0;i<n-1;i++)
    { 
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j] == 0)
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}