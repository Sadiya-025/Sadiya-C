/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Rhombus Pattern of Star
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k;
    printf("Enter the No. of Rows you Wish to Print: (Odd Numbers)\n");
    scanf("%d", &n);
    if (n%2==0)
    {
        printf("Invalid Input");
        exit(0);
    }
    k=(n+1)/2;
    for (i=1;i<=k;i++)
    {
        for (j=1;j<=k-i;j++)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i=k-1;i>=1;i--)
    {
        for (j=1;j<=k-i;j++)
        {
            printf(" ");
        }
        for (j=i;j>=1;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}