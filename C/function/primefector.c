#include<stdio.h>

void prime(int x)
{
    for(int i=2;i<=x;i++)
    {
        int a;
        if(x%i==0)
        {
            int a = 0;
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    a = 1;
                    break;
                }
            }
            if(a==0)
            {
                printf("%d\n",i);
            }
        }
        
    }

    return;
}

int main()
{
    int a;
    printf("enter the positive number : ");
    scanf("%d",&a);
    prime(a);

    return 0;
}