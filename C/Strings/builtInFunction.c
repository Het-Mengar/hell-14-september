#include<stdio.h>
#include<string.h>

int main()
{
    char* str = "megh naik";

    printf("%d\n",strlen(str));

    char s1[12] = "megh naik";
    char s2[12];


    strcpy(s2,s1);

    s2[0] = 'e';
    printf("%s\n",s2);
    printf("%s\n",s1);




    char s11[] = "megh";
    char s22[] = " naik";

    strcat(s11,s22);
    printf("%s\n",s11);




    char st[] = "megh";
    char st2[] = "meg";
    
    printf("%d\n",strcmp(st,st2));




    return 0;






}