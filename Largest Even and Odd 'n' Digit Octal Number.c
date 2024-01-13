/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Largest Even and Odd 'n' Digit Octal Number
#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the Value of 'n':\n");
    scanf("%d", &n);
    printf("The Largest %d Digit Octal Even Number is: ", n);
    for (i=0;i<n-1;i++)
    {
        printf("%d", 7);
        if (i==n-2)
        {
            printf("6");
        }
    }
    printf("\nThe Largest %d Digit Octal Odd Number is: ", n);
    for (i=0;i<n;i++)
    {
        printf("%d", 7);
    }
    return 0;
}