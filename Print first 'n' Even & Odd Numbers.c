/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Print first 'n' Even & Odd Numbers
#include <stdio.h>

int main()
{
    int n, i, e=0, o=1;
    printf("Enter the value of 'n': \n");
    scanf("%d", &n);
    printf("The first %d Even Numbers are: ", n);
    for (i=1;i<=n;i++)
    {
        printf("%d ",e);
        e+=2;
    }
    printf("\nThe first %d Odd Numbers are: ", n);
    for (i=1;i<=n;i++)
    {
        printf("%d ",o);
        o+=2;
    }
    return 0;
}
