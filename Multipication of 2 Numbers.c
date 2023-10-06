/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Multipication of 2 Numbers
#include <stdio.h>
int main ()
{
    int A, B, product=0;
    printf("Enter 2 Numbers A and B: \n");
    scanf("%d%d", &A, &B);
    product=A*B;
    printf("The value of AxB is: %d", product);
    return 0;
}