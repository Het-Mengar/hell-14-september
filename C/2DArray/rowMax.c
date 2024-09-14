#include<stdio.h>
#include<limits.h>

int main()
{
    int arr[3][3] = {1,2,3,14,15,16,7,8,9};
    int ans = INT_MIN;
    int r;

    for(int i=0;i<3;i++)
    {
        int sum = 0;

        for(int j=0;j<3;j++)
        {
            sum += arr[i][j];

            if(sum>ans)
            {
                ans = sum;
                r = i;
            }
        }
    }

    printf("the maximum sum of row index %d is %d ",r,ans);
    return 0;
}