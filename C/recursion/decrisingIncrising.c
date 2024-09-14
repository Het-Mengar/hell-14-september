#include<stdio.h>
void inde(int x)
{
    if(x == 0) return;
    printf("%d\n",x);
    inde(x-1);
    printf("%d\n",x);
    return;
}

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);  

    inde(n); 

    return 0;
}