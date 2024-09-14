#include<stdio.h>
int main()
{
    
    
    for(int i = 1;i<=500;i++)
    {
        int sum = 0;
        int a = i;

        while(a!=0)
        {
            int x = a%10;
            sum = sum + x*x*x;
            a = a/10;
        }
        if(i==sum)
        printf("%d\n",sum);

    }

    return 0;
}