#include<stdio.h>

int main()
{
    int arr[8] = {1,2,3,4,4,3,2,1};
    int a = 1;

    for(int i=0,j=7;i<j;i++,j--)
    {
        
        if(arr[i]!=arr[j]) 
        {
            printf("this is not palindrome series");
            a = 0;
            break;
        }

    }
    if(a==1) printf("this is palindrome series");

    
    
    
    return 0;
}