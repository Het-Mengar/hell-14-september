#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0;i<=4;i++)
    {
        printf("enter the element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
   
    for(int i=0;i<=4;i++)
    {
        if(arr[i]<35) printf("%d\n",i);
    }

    
    return 0;
}
