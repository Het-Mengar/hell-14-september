#include<stdio.h>

void PreInPost(int a)
{
    if(a==0) return;

    printf("%d",a);
    PreInPost(a-1);

    printf("%d",a);
    PreInPost(a-1);
    
    printf("%d",a);
    

    return;
}

int main()
{
    int a;
    printf("enter the number : ");
    scanf("%d",&a);

    PreInPost(a);
    return 0;
}