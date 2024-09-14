#include<stdio.h>

int gcd(int x,int y)
{
    int z;
    if(x<y)  z = x;
    else  z = y;

    int hcf;
    for(int i=1;i<=z;i++)
    {
        if(x%i==0 && y%i==0)
         hcf = i;
        
        
        
    }
    return hcf;
}
int main()
{
    int a = 8;
    int b = 44;

    int hcf = gcd(a,b);
    printf("%d",hcf);
}