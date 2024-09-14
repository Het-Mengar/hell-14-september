#include<stdio.h>
#include<string.h>
int main()
{
    FILE* ptr = fopen("megh.txt","r");

    char str[100];

    while(fgets(str,100,ptr) != NULL)
    printf("%s",str);

    //only first line will print .......



    // if(fgets(str,100,ptr) != NULL) 
    // printf("%s",str);



    //creat a new file only in written file

    FILE* p = fopen("megh.txt","w");  

    char str2[] = "hello every one";

    fputs(str2,p);
    
    fclose(p);
  

    return 0;
}