#include<stdio.h>
int main()
{
    int arr[2][3] = {{2,6,34},{97,33,1}};
    int min = arr[0][0];

    int r,c;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(min>arr[i][j]) min = arr[i][j];
            r = i;
            c = j;
        }
    }

    printf("%d is the minimum number at index no. (%d, %d)",min,r,c);
    return 0;
}