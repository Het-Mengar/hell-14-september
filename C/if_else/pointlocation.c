#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the x and y cordinate : ");
    scanf("%d%d",&x,&y);

    if(x==0 && y==0)
    {
    printf("this point is lies on origine");
    }
    else if(x==0)
    printf("this point is lise on Y-axis");

    else if(y==0)
    printf("this point is lise on x-axis");

    else
    printf("this point is lies on planes");

    return 0;

}