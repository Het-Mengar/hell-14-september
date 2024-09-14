#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    scanf("%d",&a);
    scanf("%c",&ch);
    scanf("%d",&b);

    switch(ch)
    {
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%.31f",(double)a/b);
            break;
        default:
            printf("enter currect opparator");
       
    }
    return 0;
}