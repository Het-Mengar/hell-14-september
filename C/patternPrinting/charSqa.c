#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of outer side : ");
    scanf("%d",&n);

    int min;
    for(int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
        int a = i + 64;
        if(i>n) a = 2*n-i+64;
        int b = j + 64;
        if(j>n) b = 2*n-j+64;

        if(a<b)  min = a;
        else min = b;
        int max = n+1-min+64+64;
        int ch = (char)max;

        printf("%c ",ch);
        }

        printf("\n");

    }

    return 0;
}  

//if you want reverce of this.............  do not do n+1-min+64+64. print min directly.
