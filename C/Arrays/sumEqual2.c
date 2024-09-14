#include<stdio.h>
int main()
{
    int arr[7] = {4,6,45,-1,5,1,5};
    int x = 10;
    int count = 0;

    for(int i=0;i<=6;i++)
    {
        for(int j=i+1;j<=6;j++)
        {
            for(int k=j+1;k<=6;k++)
            {
                if(arr[i]+arr[j]+arr[k]==10) 
                {
                    count++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }  
    }

    printf("%d",count);
      
    return 0;
}