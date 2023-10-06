/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Sum of the digits of a Number
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, sum=0;
    printf("Enter the Value of 'n': \n");
    scanf("%d", &n);
    while (n>0)
    {
        sum+=n%10;
        n/=10;
    }
    printf("The Sum of the Digits is: %d", sum);
    getch();
}

