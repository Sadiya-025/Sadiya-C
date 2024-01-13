/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Full Pyramid of Alphabets
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k='A';
    printf("Enter the No. of Rows you Wish to Print: (1-26)\n");
    scanf("%d", &n);
    if (n>26)
    {
        printf("Invalid Input");
        exit(0);
    }
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for (j=1;j<=2*i-1;j++)
        {
            printf("%c ", k);
        }
        k++;
        printf("\n");
    }
    return 0;
}


