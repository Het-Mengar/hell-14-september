#include<stdio.h>
int main()
{
    
    int i;
    int n;
    printf("enter the number = ");
    scanf("%d",&n);
    for(i=n;i<=(10*n);i=i+n)
    {
       
        printf("%d ",i);
    }
    return 0;

}