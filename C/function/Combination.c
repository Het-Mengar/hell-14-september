#include<stdio.h>
int fect(int x)
{
    int fect = 1;
    for(int i=2;i<=x;i++)
    {
        fect = fect*i;
    }
    return fect;

}

int comb(int n, int r)
{
int combination = fect(n)/(fect(r)*fect(n-r));
return combination;
}

int main()
{
    int n,r;
    printf("enter the value of n : ");
    scanf("%d",&n);
    printf("enter the value of r : ");
    scanf("%d",&r);

    int ans = comb(n,r);

    printf("%d",ans);
}