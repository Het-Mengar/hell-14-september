#include<stdio.h>

void fect(int x)
{
    int fect = 1;
    printf("0! = 1");
    for(int i=1;i<=x;i++)
    {
        fect = fect*i;
        printf("\n%d! = %d",i,fect);
        
        
    }

    return;
}
int main()
{
    int a = 7;
    fect(a);

    return 0;
}