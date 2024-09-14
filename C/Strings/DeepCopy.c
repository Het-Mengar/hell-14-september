#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "megh naik";
    
    int size = 0;
    int i = 0;

    while(str[i]!='\0')
    {
        size++;
        i++;
    }

    printf("%d\n",size);



    char str2[size];

    for(int i=0;i<=size;i++)
    {
        str2[i] = str[i];
    }

    printf("%s\n",str);
    printf("%s",str2);

    return 0;


}