#include<stdio.h>

int stair(int x)
{
    if(x==1 || x==2) return x;

    return stair(x-1) + stair(x-2);
}

int main()
{
    int n;
    printf("please enter your number : ");
    scanf("%d",&n);

    printf("%d", stair(n));

    return 0;

}