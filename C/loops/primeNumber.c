#include<stdio.h>
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    int a = 0;

    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
          a = 1;
          break;
        }
       

    }
    if(n==1 || n==0 || n<0) 
    printf("this number is neigther peime nor composite ");

    else if(a==0)
    printf("it is a prime number");
    else
    printf("it is a composite number");

    return 0;
}