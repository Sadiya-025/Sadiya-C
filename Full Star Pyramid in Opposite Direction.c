/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Full Star Pyramid in Opposite Direction
#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the No. of Columns you Wish to Print:\n");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for (j=i;j>=1;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i=n-1;i>=1;i--)
    {
        for (j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for (j=i;j>=1;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
