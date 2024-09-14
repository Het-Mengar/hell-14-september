#include<stdio.h>
#include<string.h>
int main()
{
    struct book
    {
        int pages;
        char name[20];
        float prise;
    } a,b;


    a.pages = 100;
    a.prise = 100;
    strcpy(a.name,"seven habits");

    b.pages = 250;
    b.prise = 500.25;
    strcpy(b.name,"biogeaphy : megh naik");


    
    printf("%s",b.name);

    return 0;
}