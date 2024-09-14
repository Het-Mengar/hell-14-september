#include<stdio.h>
#include<stdbool.h>

int main()
{
    //for dasanding order..

    int arr[7] = {100,33,6,33,77,57,1};
    int n = 7;

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    printf("\n");

    for(int i=0;i<n-1;i++)
    {
        int flag = true;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag == true) break;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;

}