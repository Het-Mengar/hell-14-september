#include<stdio.h>
#include<stdbool.h>

int main()
{
    
    int a[9] = {1,2,3,4,6,7,8,9,10};
    int sum = 0;

    for(int i=0;i<=8;i++)
    {
        sum += a[i];
    }

    int sum2 = 10*(11)/2;

    printf("%d",sum2-sum);
    return 0;
}