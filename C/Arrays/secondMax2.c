#include<stdio.h>
#include<limits.h>

int main()
{
    int a[7] = {4,54,82,9,77,9,1};
    
    int max = INT_MIN;
    int smax = INT_MIN;

    for(int i=0;i<=6;i++)
    {
        if(max<a[i])
        {
            smax = max;
            max = a[i];
        }

        else if(smax<a[i] && max!=a[i]) smax = a[i];
    }

    printf("%d",smax);

    return 0;
}