#include<stdio.h>
#include<limits.h>

int main()
{
    int a[7] = {44,6,45,77,6,57,90};
    int n = 7;

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    printf("\n");

    for(int i=0;i<n-1;i++)
    {
        int min = INT_MAX;
        int minindex = -1;
        
        for(int j=i;j<n;j++)
        {
            if(min>a[j]) 
            {
                min = a[j];
                minindex = j;
            }
        }

        int temp = a[minindex];
        a[minindex] = a[i];
        a[i] = temp;

    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}