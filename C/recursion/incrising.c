#include<stdio.h>

void incrise(int x,int y)
{
    if(x>y)return;

    printf("%d\n",x);

    incrisr(x+1,y);
    return;
}
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
   

    incrise(1,n);

    
    

    return 0;
}