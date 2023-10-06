//Roots of a Quadratic Equation
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <complex.h>
int main()
{
    float a, b, c, discriminant;
    double complex x, y;
    printf("Enter the Coefficients of the Quadratic Equation: \n");
    scanf("%f%f%f", &a, &b, &c);
    discriminant=b*b-4*a*c;
    if (discriminant>0)
    {
        x=(-b+sqrt(discriminant))/2*a;
        y=(-b-sqrt(discriminant))/2*a;
        printf("The Solutions of the Quadratic Equation are: %.3f and %.3f", creal(x), creal(y));
    }
    else if (discriminant==0)
    {
        x=y=-b/2*a;
        printf("The Solutions of the Quadratic Equation are Equal and are: %.3f and %.3f", creal(x), creal(y));
    }
    else
    {
        x=(-b+csqrt(discriminant))/2*a;
        y=conj(x);
        printf("The Solutions of the Quadratic Equation are Imaginary and are: ");
        printf("(%.3f)+(%.3f)i and (%.3f)+(%.3f)i", creal(x), cimag(x), creal(y), cimag(y));
    }
    return 0;
}
