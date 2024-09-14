#include<stdio.h>
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    int a = 1;
    int b = 1;
    int sum = 1;
    if(n==1){
    printf("the fibonacci term no.1 is = 1\n");
    }
    else {
    printf("the fibonacci term no.1 is = 1\nthe fibonacci term no.2 is = 1");
    }

    for(int i = 3;i<=n;i++)
    {
       sum = a + b;
       a = b;
       b = sum;
       printf("\nthe fibonacci term no.%d is = %d",i,sum);

    }
   

    return 0;
}