#include<stdio.h>

void incrise(int x)
{
    if(x==0)return;

    incrise(x-1);

    printf("%d\n",x);

    return;
}

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
   

    incrise(n);

    
    

    return 0;
}