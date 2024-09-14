#include<stdio.h>
#include<limits.h>

int main()
{
    int arr[5] = {-24,-44,-234,-65,-87};

    int a = INT_MIN;
    
    // int a = arr[0];

    for(int i=0;i<=3;i++)
    {
       if(a<arr[i]) a = arr[i];
    }

    printf("%d",a);
    return 0;
}