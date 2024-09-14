#include<stdio.h>

int power(int x,int y)
{
    if(y==0) return 1;
    return x*power(x,y-1);
}
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    int m;
    printf("enter the number : ");
    scanf("%d",&m);


    printf("%d",power(n,m));
    
    
    return 0;
}