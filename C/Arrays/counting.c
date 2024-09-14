#include<stdio.h>
int main()
{
    int a[5] = {4,55,8,6,2};

    int x = 5;
    int count = 0;

    for(int i=0;i<=4;i++)
    {
        if(x<a[i]) count++;
        
    }

    printf("%d",count);
    return 0;
}