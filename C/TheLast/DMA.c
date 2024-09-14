#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x = sizeof(double);
    printf("%d\n",x);

    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);

    int* ptr = (int*) malloc(10*sizeof(int));

    int* p = ptr;

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&(*ptr));
        ptr++;
    }

    for(int i=1;i<=n;i++)
    {
        printf("%d ",(*p));
        p++;
    }




    return 0;
}