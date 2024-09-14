#include<stdio.h>
int main()
{
    int arr[4][4] = {1,0,1,1,0,0,0,0,1,0,0,1,1,1,1,1};
    
    int ans = 0;
    int index;

    for(int i=0;i<=3;i++)
    {
        int count = 0;

        for(int j=0;j<=3;j++)
        {
            if(arr[i][j] == 1) count++;
            
        }
        if(count>ans)
        {
            ans = count;
            index = i;
        }
    }
    printf("maximum %d times 1 repit in row index no. %d",ans,index);
    return 0;
}