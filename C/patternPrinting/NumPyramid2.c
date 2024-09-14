#include<stdio.h>
int main()
{
    int m;
    printf("enter the number of row : ");
    scanf("%d",&m);

    
    
    for(int i=1;i<=m;i++)
    {
        
        for(int j=1;j<=m-i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d ",k);
        }
        int b = i - 1;
        for(int l=1;l<=i-1;l++)
        {
            
            printf("%d ",b);
            b--;
        }
        
        
        printf("\n");
    }
   
    return 0;
}