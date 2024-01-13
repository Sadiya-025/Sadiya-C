/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Diamond Shaped Pyramid of Alphabets
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k;
    char a;
    printf("Enter the No. of Rows you Wish to Print: (1-26)\n");
    scanf("%d", &n);
    if (n>26)
    {
        printf("Invalid Input");
        exit(0);
    }
    if (n%2!=0)
    {
        k=(n+1)/2;
        for (i=1;i<=k;i++)
        {
            a='A';
            for (j=1;j<=k-i+1;j++)
            {
                printf("  ");
            }
            for (j=2*i-1;j>=1;j--)
            {
                printf("%c ", a);
                a++;
            }
            printf("\n");
        }
        for (i=k-1;i>=1;i--)
        {
            a='A';
            for (j=1;j<=k-i+1;j++)
            {
                printf("  ");
            }
            for (j=2*i-1;j>=1;j--)
            {
                printf("%c ", a);
                a++;
            }
            printf("\n");
        }
    }
    if (n%2==0)
    {
        k=n/2;
        for (i=1;i<=k;i++)
        {
            a='A';
            for (j=1;j<=k-i+1;j++)
            {
                printf("  ");
            }
            for (j=2*i-1;j>=1;j--)
            {
                printf("%c ", a);
                a++;
            }
            printf("\n");
        }
        for (i=k;i>=1;i--)
        {
            a='A';
            for (j=1;j<=k-i+1;j++)
            {
                printf("  ");
            }
            for (j=2*i-1;j>=1;j--)
            {
                printf("%c ", a);
                a++;
            }
            printf("\n");
        }
    }
    return 0;
}
