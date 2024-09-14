#include<stdio.h>

void PreInPost(int a)
{
    if(a==0) return;

    printf("Pre %d\n",a);
    PreInPost(a-1);

    printf("in %d\n",a);
    PreInPost(a-1);
    
    printf("post %d\n",a);
    PreInPost(a-1);

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