#include<stdio.h>

int power(int x,int y)
{
   
    if(y==0) return 1;

    int a = power(x,y/2);

    if(y%2==0) return a*a;

    else return a*a*x;
    
}

int main()
{
    int n;
    printf("enter the base : ");
    scanf("%d",&n);

    int m;
    printf("enter the power : ");
    scanf("%d",&m);

    printf("%d",power(n,m));

    return 0;

}