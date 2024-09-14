#include<stdio.h>
void sum(int x,int y)
{
    if(x==0)
    {
    
        printf("%d\n",y);
        return;
    }
    sum(x-1,y+x);
    return;
}


//second method.................................



int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
   

    sum(n,0);

    
    

    return 0;
}