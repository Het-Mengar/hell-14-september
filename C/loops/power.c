#include<stdio.h>
int main()
{
    int a,b;

    printf("enter the base : ");
    scanf("%d",&a);

    printf("enter the power : ");
    scanf("%d",&b);
    int ans = 1;
    for(int i=1;i<=b;i++)
    {
        ans = ans*a;
        
        printf("%d raised to the power of %d = %d\n",a,i,ans);
    }
    if(b==0)
    printf("%d raised to the power of %d = %d\n",a,b,ans);
    

    
    
    return 0;
}