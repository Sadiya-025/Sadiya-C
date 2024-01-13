/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Calculate nCr and nPr
#include <stdio.h>

int factorial(int n)
{
    int i, result=1;
    for (i=1;i<=n;i++)
    {
        result*=i;
    }
    return result;
}

int find_nCr(int n, int r)
{
    int result;
    result=factorial(n)/(factorial(n-r)*factorial(r));
    return result;
}

int find_nPr(int n, int r)
{
    int result;
    result=factorial(n)/factorial(n-r);
    return result;
}

int main()
{
    int n, r;
    printf("Enter the value of 'n':\n");
    scanf("%d", &n);
    printf("Enter the value of 'r':\n");
    scanf("%d", &r);
    printf("The Value of nCr is %d & The Value of nPr is %d", find_nCr(n,r), find_nPr(n,r));
    return 0;
}