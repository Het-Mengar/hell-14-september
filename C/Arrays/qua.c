// this only possible when array is sorted in non desending order..

#include<stdio.h>
int main()
{
    int n = 9; //size of array
    int arr[] = {1,2,3,4,5,8,9,10,11};


    int i = 0;
    int j = n-1;  //index

    while(i<j)
    {
        if(arr[i] + arr[j] == 8) 
        {
            printf("%d and %d are numbers whose sume = 8",arr[i],arr[j]);
            break;
        }
        
        else if(arr[i] + arr[j] < 8) i++;
        else j--;
    }
    return 0;
}