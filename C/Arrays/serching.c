#include<stdio.h>
#include<stdbool.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    int x;
    printf("enter the number : ");
    scanf("%d",&x);

    bool check = false;

    for(int i=0;i<=4;i++)
    {
        if(x==arr[i]) 
        {
            check = true;
            printf("this number is avelable in this array's index no. %d",i);
        }
    }
    
    if(check == false) printf("this number is not avalable in this array");

    return 0;
}