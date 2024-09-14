#include<stdio.h>
#include<string.h>

int main()
{
    char str[20] = "megh naik";
    printf("%s\n",str);

    for(int i=8;i>=3;i--)
    {
        str[i+1] = str[i];
    }
    str[3] = 'x';
    printf("%s",str);

    return 0;


}