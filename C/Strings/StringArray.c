#include<stdio.h>
int main()
{
    char str[] = "Oum shree ganeshay namah";

    int i = 0;

    while(str[i]!='\0')
    {
        printf("%c",*(i+str));   //str+i, i[str] , str[i]
        i++;

    }



    printf("\n");

   



    return 0;
}