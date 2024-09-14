#include<stdio.h>
int main()
{
    int arr[7] = {1,2,3,4,3,1,1};
    for(int i=0;i<=6;i++)
    {
        int a = 0;
        for(int j=0;j<=6;j++)
        {
            if(i!=j)
            { 
                if(arr[i]==arr[j])
                {
                    a = 1;
                }
            }
        }
        if(a==0)
        {
            printf("\nthis is unique number : %d",arr[i]);
            
        }
    }
}