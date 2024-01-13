/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Complex Numbers Calculator
#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
#include <math.h>
int main()
{
    char c1;
    int c2;
    double complex x, y;
    float a, b, c, d;
    printf("\t\t\t\t\t\tWelcome to Complex Numbers Calculator");
    printf("\n\t\t\t\t This Calculator can Perform Arithematic(A) & Complex Functions(C)");
    printf("\n\t\t\t\t\t Which Function do you wish to Perform? (A/C)  ");
    scanf("%c", &c1);
    if (c1=='A')
    {
        printf("\t\tThe Operations Provided are Addition, Subtraction, Multiplication, Division, Square Root, Power");
        printf("\n\t\t\t\t\tWhich Operation do you wish to Perform? (1-6)  ");
        scanf("%d", &c2);
        if (c2==1)
        {
            printf("Enter the Real and Imaginary Part of the First Complex Number:\n");
            scanf("%f%f", &a, &b);
            printf("Enter the Real and Imaginary Part of the Second Complex Number:\n");
            scanf("%f%f", &c, &d);
            x=a+b*I;
            y=c+d*I;
            printf("The Sum of the 2 Complex Numbers is (%.3f)+(%.3f)i", creal(x+y), cimag(x+y));
        }
        else if (c2==2)
        {
            printf("Enter the Real and Imaginary Part of the First Complex Number:\n");
            scanf("%f%f", &a, &b);
            printf("Enter the Real and Imaginary Part of the Second Complex Number:\n");
            scanf("%f%f", &c, &d);
            x=a+b*I;
            y=c+d*I;
            printf("The Difference of the 2 Complex Numbers is (%.3f)+(%.3f)i", creal(x-y), cimag(x-y));
        }
        else if (c2==3)
        {
            printf("Enter the Real and Imaginary Part of the First Complex Number:\n");
            scanf("%f%f", &a, &b);
            printf("Enter the Real and Imaginary Part of the Second Complex Number:\n");
            scanf("%f%f", &c, &d);
            x=a+b*I;
            y=c+d*I;
            printf("The Product of the 2 Complex Numbers is (%.3f)+(%.3f)i", creal(x*y), cimag(x*y));
        }
        else if (c2==4)
        {
            printf("Enter the Real and Imaginary Part of the Numerator Complex Number:\n");
            scanf("%f%f", &a, &b);
            printf("Enter the Real and Imaginary Part of the Denominator Complex Number:\n");
            scanf("%f%f", &c, &d);
            if (c==0&&d==0)
            {
                printf("Invalid Input");
                exit(0);
            }
            x=a+b*I;
            y=c+d*I;
            printf("The Quotient of the 2 Complex Numbers is (%.3f)+(%.3f)i", creal(x/y), cimag(x/y));
        }
        else if (c2==5)
        {
            printf("Enter the Real and Imaginary Part of the Complex Number:\n");
            scanf("%f%f", &a, &b);
            x=a+b*I;
            printf("The Square Root of the Complex Number is (%.3f)+(%.3f)i", creal(csqrt(x)), cimag(csqrt(x)));
        }
        else if (c2==6)
        {
            printf("Enter the Real and Imaginary Part of the Base Complex Number:\n");
            scanf("%f%f", &a, &b);
            printf("Enter the Real and Imaginary Part of the Exponent Complex Number:\n");
            scanf("%f%f", &c, &d);
            x=a+b*I;
            y=c+d*I;
            printf("The Exponent Value of the Complex Numbers is (%.3f)+(%.3f)i", creal(cpow(x,y)), cimag(cpow(x,y)));
        }
        else
        printf("Invalid Input");
    }
    else if (c1=='C')
    {
         printf("\t\t\t\tThe Operations Provided are Absolute Value, Argument, Conjugate");
        printf("\n\t\t\t\t\tWhich Operation do you wish to Perform? (1-3)  ");
        scanf("%d", &c2);
        if (c2==1)
        {
            printf("Enter the Real and Imaginary Part of the Complex Number:\n");
            scanf("%f%f", &a, &b);
            x=a+b*I;
            printf("The Absolute Value of the Complex Number is %.3f", cabs(x));
        }
        else if (c2==2)
        {
            float p=180/M_PI;
            printf("Enter the Real and Imaginary Part of the Complex Number:\n");
            scanf("%f%f", &a, &b);
            x=a+b*I;
            printf("The Argument of the Complex Number is %.3f Degrees", carg(x)*p);
        }
        else if (c2==3)
        {
            printf("Enter the Real and Imaginary Part of the Complex Number:\n");
            scanf("%f%f", &a, &b);
            x=a+b*I;
            if (b==0)
            {
                printf("The Conjugate of the Complex Number is (%.3f)+(%.3f)i", creal(x), cimag(x));
                exit(0);
            }
            printf("The Conjugate of the Complex Number is (%.3f)+(%.3f)i", creal(conj(x)), cimag(conj(x)));
        }
        else
        printf("Invalid Input");
    }
    else
    printf("Invalid Input");
    return 0;
}
