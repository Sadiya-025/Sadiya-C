/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Floyd Triangle
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k=1;
    printf("Enter the No. of Rows you Wish to Print: (1-34)\n");
    scanf("%d", &n);
    if (n>34)
    {
        printf("Sorry! Cannot Print Rows Above 34");
        exit(0);
    }
    for (i=1;i<=n;i++)
    {
        for (j=i;j>=1;j--)
        {
            printf("%3d ", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}