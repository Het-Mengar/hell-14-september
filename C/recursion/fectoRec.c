#include<stdio.h>

int fecto(int x)
{
    if(x == 1 || x == 0) return 1;
    int fectorial = x*fecto(x-1);
    return fectorial;
}
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    
    printf("%d",fecto(n));

    return 0;
}