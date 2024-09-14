#include<stdio.h>

typedef int* pointer;

int main()
{
    int a,b;
    pointer x = &a,y = &b;     


    //you can't write       int* x = &a,y = &b;  
     
    printf("%p\n%p");

    return 0;
}