/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Sum of First 'n' Natural Numbers
#include <stdio.h>

int main()
{
    int n, i, result=0;
    printf("Enter the Value of 'n': \n");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
        result+=i;
    }
    printf ("The Sum of First %d Natural Numbers is: %d", n, result);
    return 0;
}

