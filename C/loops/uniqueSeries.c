#include<stdio.h>
int main()

{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    // int y = 0;
    
    // for(int x=1;x<=n;x++)
    // {
       
    //     // if(x%2==0)
    //     // y = y + x*(-1);
        
    //     // else
    //     // y = y + x; 
        
        
    // }

    // printf("your answer is = %d",y);

    int ans;
    if(n%2==0)
    ans = (-1)*n/2;
    else
    ans = (-1)*(n-1)/2 + n;

    printf("your answer is = %d",ans);

    return 0;


}


