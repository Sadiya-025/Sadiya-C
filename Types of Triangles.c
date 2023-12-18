/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Types of Triangles
#include <stdio.h>

int main()
{
    float a, b, c, sum, l;
    printf("Enter the 3 Sides of the Triangle:\n");
    scanf("%f%f%f", &a, &b, &c);
    l=(a>b? (a>c? a:c):(b>c? b:c));
    sum=(l==a?b+c:(l==b?a+c:a+b));
    if (sum<l)
    {
        printf("The Triangle is Invalid");
    }
    if (a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b)
    {
        printf("The Triangle is Right Angled\n");
    }
    if (a==b&&b==c)
    {
        printf("The Triangle is Equilateral");
    }
    if (a==b&&b!=c||b==c&&c!=a||c==a&&a!=b)
    {
        printf("The Triangle is Isosceles");
    }
    if (sum>l)
    {
        if (a!=b&&b!=c&&c!=a)
        {
            printf("The Triangle is Scalene");
        }
    }
    return 0;
}