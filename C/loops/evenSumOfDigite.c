#include<stdio.h>
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    int x;
    int sum = 0;

    while(n!=0)
    {
        if(n%2==0)
        {
        x = n%10;
        sum = sum + x;
        }
         n = n/10;
    }

    printf("your sum of digit is = %d",sum);

    return 0;

}