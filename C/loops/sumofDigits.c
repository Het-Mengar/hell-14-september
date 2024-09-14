#include<stdio.h>
int main()

// {
//     int n,b,c,d,e,f,z;
//     printf("enter the number : ");
//     scanf("%d",&n);

//     float a = n;

//     if(a != 0)
//     {
//         a = a/10;
//         int x = a;
//          b = (a - x)*10;
//         printf("\n%d",b);
//     }

//     if(a != 0)
//     {
//         a = a/10;
//         int x = a;
//          c = (a - x)*10;
//         printf("\n%d",c);
//     }

//     if(a != 0)
//     {
//         a = a/10;
//         int x = a;
//          d = (a - x)*10;
//         printf("\n%d",d);
//     }

//      if(a != 0)
//     {
//         a = a/10;
//         int x = a;
//         e = (a - x)*10;
//         printf("\n%d",e);
//     }

//      if(a != 0)
//     {
//         a = a/10;
//         int x = a;
//          f = (a - x)*10;
//         printf("\n%d",f);
//     }
//      z = b+c+d+e+f;
//     printf("\nyour sum of digits is : %d",z);
// }



//using while loop


{
    long n;
    printf("enter your number : ");
    scanf("%ld",&n);
    long sum = 0;
    long ld;
    while(n != 0)
    {
         ld = n%10;

        sum = sum + ld;
        n = n/10;
        
    }
    printf("%ld",sum);

}