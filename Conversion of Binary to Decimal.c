/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Conversion of Binary to Decimal
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i=0, count=0;
    long A, temp, decimal=0, digits[1000];
    printf("Enter the Binary Number:\n");
    scanf("%ld", &A);
    temp=A;
    while (A>0)
    {
        digits[i]=A%10;
        A=A/10;
        count++;
        i++;
    }
    for (i=0;i<count;i++)
    {
        decimal+=digits[i]*pow(2,i);
        if (digits[i]!=1&&digits[i]!=0)
        {
            printf("The Binary Number is Invalid");
            exit(0);
        }
    }
    printf("The Decimal Value for %ld is %ld", temp, decimal);
    return 0;
}