#include<stdio.h>
int main()
{
    int a = 1;

    int* p = &a;
    int** q = &p;
    int*** r = &q;
    int **** s = &r;
    
    printf("%p",p);
    printf("\n%d",*p);
    printf("\n%p\n",&p);
    
    printf("\n%p",q);
    printf("\n%d",**q);
    printf("\n%p\n",&q);

    printf("\n%p",r);
    printf("\n%d",***r);
    printf("\n%p\n",&r);

    printf("\n%p",s);
    printf("\n%d",****s);
    printf("\n%p\n",&s);
    return 0;
     
}