#include<stdio.h>
#include<stdio.h>

int main()
{
    char str[] = "megh naik";

    char* ptr = str;
    printf("%p\n",&str[1]);

    printf("%p",str);  // this also possible.........dairec It denote 0th index that is whole array address

    return 0;
}