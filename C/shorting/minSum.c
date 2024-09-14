//It's quation................

#include<stdio.h>
int main()
{
    int a[] = {5,9,8,0,9,4,6};
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

    printf("\n");

    int sum = 0;

    for(int i=0;i<n;i++)
    {
        sum = sum*10;
        sum = (sum + a[i]);
    }

    printf("%d\n",sum);

    for(int i=n-1;i>=0;i--)
    {
        if(a[i] != a[i-1])
        {
            int temp = a[i];
            a[i] = a[i-1];
            a[i-1] = temp;
            break;
        }
    }

    int sum2 = 0;

    for(int i=0;i<n;i++)
    {
        sum2 = sum2*10;
        sum2 = (sum2 + a[i]);
    }

    printf("%d\n",sum2);

    int ans = sum + sum2;

    printf("your sum of %d + %d = %d",sum,sum2,ans);

    return 0;
}