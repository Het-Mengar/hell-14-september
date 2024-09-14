#include<stdio.h>
int main()
{
    int p;
    printf("Plese enter the row of  matrix : ");
    scanf("%d",&p);

    int q;
    printf("Plese enter the coulam of  matrix : ");
    scanf("%d",&q);

    printf("plese enter the element of matrix : ");

    int a[p][q];

    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    int maxc = q-1 , maxr = p-1 , minc = 0 , minr = 0 , count = 0 , mul = p*q;

    while(count<mul)
    {

        for(int j = minc; j <= maxc && count<mul; j++)
        {
            printf("%d ",a[minr][j]);
            count++;
        }
        minr++;

        for(int i = minr; i <= maxr && count<mul; i++)
        {
            printf("%d ",a[i][maxc]);
            count++;
        }
        maxc--;

        for(int j = maxc; j >= minc && count<mul; j--)
        {
            printf("%d ",a[maxr][j]);
            count++;
        }
        maxr--;

        for(int i = maxr; i >= minr && count<mul; i--)
        {
            printf("%d ",a[i][minc]);
            count++;
        }
        minc++;
    }

   

    return 0;
}