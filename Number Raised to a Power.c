//Number Raised to a Power
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, result=0;
    printf("Enter the base: \n");
    scanf("%lf", &a);
    printf("Enter the exponent: \n");
    scanf("%lf", &b);
    result=pow(a,b);
    printf("The value of %lf raised to %lf is %lf\n", a, b, result);
    return 0;
}



