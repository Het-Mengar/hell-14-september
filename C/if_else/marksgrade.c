#include<stdio.h>
int main()

{
    int n;
    printf("enter your marks : ");
    scanf("%d",&n);

   
    if(n>90)
    printf("A grade");

    else if(n>80)
    printf("B grade");

    else if(n>70)
    printf("C grade");

    else if(n>60)
    printf("D grade");
    
    else
    printf("you are fail");

    return 0;
}