#include<stdio.h>

int maze(int cr,int cc,int er,int ec)
{
    int rightWay = 0;
    int dowenWay = 0;

    if(cr==er && cc==ec) return 1;

    if(cr==er)
    {
        rightWay += maze(cr,cc+1,er,ec);
    }
    if(cc==ec)
    {
        dowenWay += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec)
    {
        rightWay += maze(cr,cc+1,er,ec);
        dowenWay += maze(cr+1,cc,er,ec);
    }
    int totway = dowenWay + rightWay;
    return totway;

}

int main()
{
    int m;
    printf("enter the row of maze : ");
    scanf("%d",&m);

    int n;
    printf("enter the collem of maze : ");
    scanf("%d",&n);

    int z = maze(1,1,m,n);

    printf("\n%d",z);

    return 0;
}