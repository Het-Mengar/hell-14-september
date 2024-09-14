#include<stdio.h>

int stair(int x)
{
    if(x==1 || x==2 ) return x;
    if(x==3) return 4;

    return stair(x-1) + stair(x-2) + stair(x-3);
}
int main()
{
    int n;
    printf("please enter your number : ");
    scanf("%d",&n);

    printf("%d", stair(n));



    return 0;

}