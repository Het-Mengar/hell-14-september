#include<stdio.h>
int main()
{
    int arr[7] = {4,6,45,46,5,5,5};
    int x = 10;
    int count = 0;

    for(int i=0;i<=6;i++)
    {
        
        for(int j=i+1;j<=6;j++)
        {
            if(arr[i]+arr[j]==10) 
            {
                count++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        } 
        
    }

    printf("%d",count);
      

    return 0;
}