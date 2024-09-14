#include<stdio.h>
int main()
{
    int a;
    printf("enter the non zero number = ");
    scanf("%d",&a);

    if(a<0)
    {
        printf("your negetive number is = %d",a);
        
    }
    if(a>0)
    {
        a = a*(-1);
        printf("your negetive number is = %d",a);
    }
    if(a==0)
    {
        printf("please enter nonzero value to be prcceed ");
        scanf("%d",a);
    }
    

    
    return 0;
}