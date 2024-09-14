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

int perm(int n , int r)
{
    int perm = fect(n)/fect(n-r);
    return perm;
}

int main()
{

    int n,r;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter r : ");
    scanf("%d",&r);

    printf("%d",perm(n,r));

    return 0;

}
