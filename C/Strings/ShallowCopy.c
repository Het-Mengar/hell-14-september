#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "megh naik";
    char* p = str;

    str[1] = '#';
    printf("%s",p);

    return 0;
}