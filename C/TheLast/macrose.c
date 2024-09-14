#include<stdio.h>
#define PI 3.14159265359
#define area(r) (PI*r*r)

int main()
{
    // double x = 3.14159265359;


    /*float can writre 6 desimal
    double can write 15 decimal
    long double can write  %.5Lf*/ 

    printf("%.11f\n",PI);
    printf("%.10lf",area(10));
    return 0;
}