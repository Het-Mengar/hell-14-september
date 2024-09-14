#include<stdio.h>
#include<string.h>
#include<limits.h>

int main()
{

    char str[100];

    // scanf("%s",&str);
   

    printf("\n");

    gets(str);

    puts(str);

    printf("\nyour input was : %s\n\n",str);

    scanf("%[^\n]s",str);

    printf("your input was : %s\n\n",str);

    

    return 0;
}