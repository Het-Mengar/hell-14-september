#include<stdio.h>
int main()
{
    int p;
    printf("Plese enter the row of  matrix : ");
    scanf("%d",&p);

    int q;
    printf("Plese enter the coulam of  matrix : ");
    scanf("%d",&q);

    int a[p][q];

    int maxc = q-1;
    int maxr = p-1;
    int minc = 0;
    int minr = 0;
    int count = 1;
    int mul = p*q;

    while(count<=mul)
    {

        for(int j=minc; j<=maxc && count<=mul;j++)
        {
            a[minr][j] = count++;
            
        }
        minr++;

        for(int i=minr; i<=maxr && count<=mul; i++)
        {
            a[i][maxc] = count++;
            
        }
        maxc--;

        for(int j = maxc; j >= minc && count<=mul; j--)
        {
            a[maxr][j] = count++;
            
        }
        maxr--;

        for(int i = maxr; i >= minr && count<=mul; i--)
        {
            a[i][minc] = count++;
        
        }
        minc++;
    }

    printf("\n");

    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d ",a[i][j]);
        }

        printf("\n");
        
    }

   

    return 0;
}