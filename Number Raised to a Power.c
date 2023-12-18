/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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



