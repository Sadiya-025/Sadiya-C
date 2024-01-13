/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Full Alphabet Pyramid in 180 Degrees
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j;
    char k;
    printf("Enter the No. of Columns you Wish to Print: (1-26)\n");
    scanf("%d", &n);
    if (n>26)
    {
        printf("Invalid Input");
        exit(0);
    }
    for (i=1;i<=n;i++)
    {
        k='A';
        for (j=1;j<=i;j++)
        {
            printf("%c ", k);
            k++;
        }
        printf("\n");
    }
    for (i=n-1;i>=1;i--)
    {
        k='A';
        for (j=i;j>=1;j--)
        {
            printf("%c ", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}