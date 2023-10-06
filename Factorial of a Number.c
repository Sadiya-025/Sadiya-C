/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Factorial of a Number
#include <stdio.h>

int main()
{
    int A, i, Result=1;
    printf("Enter the value of A: \n");
    scanf("%d", &A);
    for (i=1;i<=A;i++)
    {
        Result*=i;
    }
    printf("The value of %d! is: %d", A,Result);
    return 0;
}
