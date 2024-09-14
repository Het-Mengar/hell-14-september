#include<stdio.h>
int main()
{
    int n;
    printf("enter the line number : ");
    scanf("%d",&n);

    for(int i=0;i<=n-1;i++)
    {
        int first = 1;
        for(int j=0;j<=i;j++)
        {
            
            printf("%d ",first);
            first = first*(i-j)/(j+1);
        }
        printf("\n");
    }
    
    return 0;
}