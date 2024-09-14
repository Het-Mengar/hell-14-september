//only when there are number are 1 to n. and arr size is n+1;
//n = 7

#include<stdio.h>
int main()
{
    int sum = 0;
    int n = 8;
    int arr[] = {1,2,3,4,5,2,6,7,8};

    for(int i=0;i<9;i++)
    {
        sum = sum + arr[i];
    }

    int x = n*(n+1)/2;
    
    int ans = sum - x;
    printf("%d",ans);

    
    return 0;
}