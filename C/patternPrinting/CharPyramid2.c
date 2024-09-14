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
        for(int k=65;k<=i+64;k++)
        {
            char ch = (char)k;
            printf("%c ",ch);
        }
        int a = 63 + i;
        for(int l=1;l<=i-1;l++)
        {
            char ch = (char)a;
            printf("%c ",ch);
            a--;
        }
        
       
        printf("\n");
    }
   
    return 0;
}