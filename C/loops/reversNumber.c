#include<stdio.h>
int main()

{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    int z = n;

    int x;
    int r = 0;

    while(n>0)
    {
       x = n%10;
       r = r*10 + x;
       n = n/10;
    }
    printf("your reverce number = %d",r);
    
    int y = z + r;
    printf("\nyour sum is = %d",y);
   

    return 0;
}