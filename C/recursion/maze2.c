#include<stdio.h>

int maze2(int r,int c)
{
    int rightWay = 0;
    int dowenWay = 0;
    

    if(r==1 && c==1) return 1;
    if(r==1) 
    {
        rightWay += maze2(r,c-1);
    }
    if(c==1) 
    {
        dowenWay += maze2(r-1,c);
    }
    if(r>1 && c>1)
    {
        rightWay += maze2(r,c-1);
        dowenWay += maze2(r-1,c);
    }

    int totWay = rightWay + dowenWay;
    
    return totWay;

}

int main()
{
    int m;
    printf("enter the row of maze : ");
    scanf("%d",&m);

    int n;
    printf("enter the collem of maze : ");
    scanf("%d",&n);

    int z = maze2(m,n);

    printf("\n%d",z);

    return 0;
}