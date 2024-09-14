#include<stdio.h>
int main()
{
    int arr[7] = {1,1,6,8,2,6,9};
    for(int i=0;i<=6;i++)
    {
        for(int j=i+1;j<=6;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("the number %d is repeted on index %d and %d\n",arr[i],i,j);
            }
        }
    }
    return 0;

}