#include<stdio.h>
#include<limits.h>

int main()
{
    int a[7] = {4,54,82,9,775,9,1};
    
    int max = INT_MIN;
    int smax = INT_MIN;

    for(int i=0;i<=6;i++)
    {
        if(max<a[i]) max = a[i];
    }

    for(int i=0;i<=6;i++)
    {
        if(smax<a[i] && a[i]!=max) smax = a[i];
    }

    printf("%d",smax);

    return 0;
}