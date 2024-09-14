#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "hi megh the revolutionary";

    char* ptr = str;
    int i = 1;

    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
        i++;
    }

    printf("\n");

    //Or...........

    

    char* p = "hi hello";
    p = "by by.";
    printf("%s\n",p);

    printf("\n");



    char strrr[] = "megh naik";
    char* pointer = strrr;
    pointer = "MB Naik";
    printf("%s\n",pointer);
    printf("%s\n",strrr);
    printf("\n");



    char string[] = "one two three";   //change by p

    char*poi = string;

    *poi = 'p';
    printf("%s",poi);


    


    return 0;
}