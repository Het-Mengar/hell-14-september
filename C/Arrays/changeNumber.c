#include<stdio.h>
int main()
{
    int a[5] = {4,5,8,6,2};

    for(int i=0;i<=4;i++)
    {
        printf("%d\n",a[i]);
    }

    printf("\n\n");

    for(int i=0;i<=4;i++)
    {
        if(i%2!=0) a[i] *= 2;
        else a[i] = a[i] + 10;
    }

    for(int i=0;i<=4;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}