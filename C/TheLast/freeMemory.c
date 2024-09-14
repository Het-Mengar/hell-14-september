#include<stdio.h>
#include<stdlib.h>

int main()
{
    int* ptr = (int*) calloc(10,7);

    int* p = ptr;

    int* x = ptr;
    
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);

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

    free(x);

    ptr = NULL;

    printf("\n%p",ptr);

    return 0;
}