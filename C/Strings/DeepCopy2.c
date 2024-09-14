#include<stdio.h>
#include<string.h>

int main()
{
    char* str = "megh naik";
    
    char* str2;
    str2 = str;


    str2 = "MB Naik";

    printf("%s\n",str);
    printf("%s",str2);
    return 0;


}