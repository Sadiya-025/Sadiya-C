//Online Calculator
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char c1;
    int c2;
    float a, b;
    printf("\t\t\t\t\t\tWelcome to Online Calculator");
    printf("\n\tThis Calculator can Perform Arithematic(A), Number Variation(N), Exponential(E), Trigonometric Functions(T)");
    printf("\n\t\t\t\t\tWhich Function do you wish to Perform? (A/N/E/T)  ");
    scanf("%c", &c1);
    if (c1=='A')
    {
        printf("\t\tThe Operations Provided are Addition, Subtraction, Multiplication, Division, Remainder, Factorial");
        printf("\n\t\t\t\t\tWhich Operation do you wish to Perform? (1-6)  ");
        scanf("%d", &c2);
        if (c2==1)
        {
            printf("Enter the 2 Numbers You Wish to Add:\n");
            scanf("%f%f", &a, &b);
            printf("The Sum of the 2 Numbers is %.3f", a+b);
        }
        else if (c2==2)
        {
            printf("Enter the 2 Numbers You Wish to Subtract:\n");
            scanf("%f%f", &a, &b);
            printf("The Difference of the 2 Numbers is %.3f", a-b);
        }
        else if (c2==3)
        {
            printf("Enter the 2 Numbers You Wish to Multiply:\n");
            scanf("%f%f", &a, &b);
            printf("The Product of the 2 Numbers is %.3f", a*b);
        }
        else if (c2==4)
        {
            printf("Enter the 2 Numbers You Wish to Divide:\n");
            scanf("%f%f", &a, &b);
            if (b==0)
            {
                printf("Invalid Input");
                exit(0);
            }
            printf("The Quotient of the 2 Numbers is %.3f", a/b);
        }
        else if (c2==5)
        {
            printf("Enter the Dividend and the Divisor to find the Remainder:\n");
            scanf("%f%f", &a, &b);
            if (b==0)
            {
                printf("Invalid Input");
                exit(0);
            }
            printf("The Modulo of the 2 Numbers is %.3f", fmod(a,b));
        }
        else if (c2==6)
        {
            int i, factorial=1;
            printf("Enter the Number whose Factorial You Wish to Get:\n");
            scanf("%f", &a);
            for (i=1;i<=a;i++)
            {
                factorial*=i;
            }
            printf("The Factorial of the Number is %d", factorial);
        }
        else
        printf("Invalid Input");
    }
    else if (c1=='N')
    {
        printf("\t\t\tThe Operations Provided are Modulus, Floor, Ceiling, Reciprocal, Fractional Part");
        printf("\n\t\t\t\t\tWhich Operation do you wish to Perform? (1-5)  ");
        scanf("%d", &c2);
        if (c2==1)
        {
            printf("Enter the Number whose Modulus You Wish to Get:\n");
            scanf("%f", &a);
            printf("The Modulus of the Number is %.3f", fabs(a));
        }
        else if (c2==2)
        {
            printf("Enter the Number whose Floor Value You Wish to Get:\n");
            scanf("%f", &a);
            printf("The Floor Value of the Number is %.0f", floor(a));
        }
        else if (c2==3)
        {
            printf("Enter the Number whose Ceiling Value You Wish to Get:\n");
            scanf("%f", &a);
            printf("The Ceiling Value of the Number is %.0f", ceil(a));
        }
        else if (c2==4)
        {
            printf("Enter the Number whose Reciprocal You Wish to Get:\n");
            scanf("%f", &a);
            if (a==0)
            {
                printf("Invalid Input");
                exit(0);
            }
            printf("The Reciprocal of the Number is %.3f", 1/a);
        }
        else if (c2==5)
        {
            double in, fr;
            printf("Enter the Number whose Fractional Part You Wish to Get:\n");
            scanf("%f", &a);
            fr=modf(a, &in);
            printf("The Fractional Part of the Number is %lf\n", fr);
            printf("The Integral Part of the Number is %lf", in);
        }
        else
        printf("Invalid Input");
    }
    else if (c1=='E')
    {
        printf("\t\t\tThe Operations Provided are Log '10', Log 'e', Square Root, Power, Exponential");
        printf("\n\t\t\t\t\tWhich Operation do you wish to Perform? (1-5)  ");
        scanf("%d", &c2);
        if (c2==1)
        {
            printf("Enter the Number whose Log 10 You Wish to Get:\n");
            scanf("%f", &a);
            if (a<=0)
            {
                printf("Invalid Input");
                exit(0);
            }
            printf("The Log 10 Value of the Number is %.3f", log10(a));
        }
        else if (c2==2)
        {
            printf("Enter the Number whose Natural Log You Wish to Get:\n");
            scanf("%f", &a);
            if (a<=0)
            {
                printf("Invalid Input");
                exit(0);
            }
            printf("The Natural Log of the Number is %.3f", log(a));
        }
        else if (c2==3)
        {
            printf("Enter the Number whose Square Root You Wish to Get:\n");
            scanf("%f", &a);
            if (a<0)
            {
                printf("Invalid Input");
                exit(0);
            }
            printf("The Square Root of the Number is %.3f", sqrt(a));
        }
        else if (c2==4)
        {
            printf("Enter the Base & the Exponent:\n");
            scanf("%f%f", &a, &b);
            printf("The Exponent Value of the Numbers is %.3f", pow(a,b));
        }
        else if (c2==5)
        {
            printf("Enter the Number whose Exponential Value You Wish to Get:\n");
            scanf("%f", &a);
            printf("The Exponential Value of the Number is %.3f", exp(a));
        }
        else
        printf("Invalid Input");
    }
    else if (c1=='T')
    {
        printf("\t\t\tThe Operations Provided are Sin, Cos, Sin Inverse, Cos Inverse, Sin H, Cos H");
        printf("\n\t\t\t\t\tWhich Operation do you wish to Perform? (1-6)  ");
        scanf("%d", &c2);
        float p=M_PI/180;
        if (c2==1)
        {
            printf("Enter the Number whose Sin Value You Wish to Get (Degrees):\n");
            scanf("%f", &a);
            printf("The Sin Value of the Number is %.3f", sin(a*p));
        }
        else if (c2==2)
        {
            printf("Enter the Number whose Cos Value You Wish to Get (Degrees):\n");
            scanf("%f", &a);
            printf("The Cos Value of the Number is %.3f", cos(a*p));
        }
        else if (c2==3)
        {
            printf("Enter the Number whose Sin Inverse Value You Wish to Get in (Degrees):\n");
            scanf("%f", &a);
            if (a<0||a>1)
            {
                printf("Invalid Input");
                exit(0);
            }
            printf("The Sin Inverse Value of the Number is %.3f", asin(a)/p);
        }
        else if (c2==4)
        {
            printf("Enter the Number whose Cos Inverse Value You Wish to Get in (Degrees):\n");
            scanf("%f", &a);
            if (a<0||a>1)
            {
                printf("Invalid Input");
                exit(0);
            }
            printf("The Cos Inverse Value of the Number is %.3f", acos(a)/p);
        }
        else if (c2==5)
        {
            printf("Enter the Number whose Sin H You Wish to Get (Degrees):\n");
            scanf("%f", &a);
            printf("The Sin H of the Number is %.3f", sinh(a));
        }
        else if (c2==6)
        {
            printf("Enter the Number whose Cos H You Wish to Get (Degrees):\n");
            scanf("%f", &a);
            printf("The Cos H of the Number is %.3f", cosh(a));
        }
        else
        printf("Invalid Input");
    }
    else
    printf("Invalid Input");
    return 0;
}
