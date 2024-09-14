#include<stdio.h>
#include<stdlib.h>

int main()
{
    int* ptr = (int*) malloc(5*8);
    printf("%p\n",ptr);

    ptr = realloc(ptr,5*90);
    printf("%p",ptr);
    
    return 0;
}