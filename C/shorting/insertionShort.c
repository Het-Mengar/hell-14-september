#include<stdio.h>
int main()
{
    int a[] = {85,27,96,4,7,27,42};
    int n = 7;

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    for(int i=1;i<n;i++)
    {
        int j = i;

        while(j>0 && a[j]<a[j-1])
        {
            int temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
            j--;
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}