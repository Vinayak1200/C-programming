#include <stdio.h>
#include <math.h>
#include <complex.h>
main()
{
    double a, b, c, D;
    complex img = I;
    printf("Enter coefficient of x squared :");
    scanf("%lf", &a);
    printf("Enter coefficient of x :");
    scanf("%lf", &b);
    printf("Enter constant :");
    scanf("%lf", &c);
    D = b*b - 4*a*c;
    if (a == 0)
    printf("The value of the root is %lf\n", -c/b);
    if (D>0 && a != 0){
        printf("Value of first root is %lf\n",(-b + sqrt(D))/2*a );
        printf("Value of second root is %lf\n", (-b - sqrt(D))/2*a);
    }
    else if (D == 0 && a!=0)
    printf("The roots are equal and their value is %lf", -b/2*a);
    else if (D<0){
        printf("The value of first root is %lf + %lfi\n", creal(-b/2*a + img*sqrt(-D)/2*a), cimag(-b/2*a + img*sqrt(-D)/2*a));
        printf("The value of second root is %lf + %lfi\n", creal(-b/2*a - img*sqrt(-D)/2*a), cimag(-b/2*a - img*sqrt(-D)/2*a));
    }
  

}
