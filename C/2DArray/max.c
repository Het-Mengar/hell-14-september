#include<stdio.h>
int main()
{
    int arr[2][3] = {2,6,34,97,333,11};

    int max = arr[0][0];

    int r;
    int c;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(max<arr[i][j])
            {
                max = arr[i][j];
                r = i;
                c = j;
            }
        }
    }

    printf("%d is the maximum number at index no. (%d, %d)",max,r,c);
    return 0;
}