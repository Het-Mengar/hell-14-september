#include<stdio.h>
int sum(int x)
{
    if(x==1) return 1;
    
    int ans = x + sum(x-1);
    return ans;
}


//second method.................................



int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("%d",sum(n));
   

 

    
    

    return 0;
}