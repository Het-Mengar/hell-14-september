#include<stdio.h>
#include<limits.h>

// kth smallest value........

int main()
{
    int a[] = {7,7,36,1,66,48,6};
    int n = 7;
    int k = 5;
    int min;

    
    for(int i=0;i<k;i++)    //in this case k-1 is our k, because i start with 0.
    {
        min = INT_MAX;
        int index = -1;

        for(int j=i;j<n;j++)
        {
            if(min>a[j])
            {
                min = a[j];
                index = j;

            }
        }

        int temp = a[index];
        a[index] = a[i];
        a[i] = temp;
        
    }
    
    printf("%d",min);

    return 0;
}