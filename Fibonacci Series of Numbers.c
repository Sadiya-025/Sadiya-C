/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Fibonacci Series of Numbers
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i=0;
    int f[100];
    printf("How many numbers of the Fibonacci Series do you wish to print? \n");
    scanf("%d", &n);
    f[0]=0;
    f[1]=1;
    for (i=0;i<n;i++)
    {
        f[i+2]=f[i+1]+f[i];
        printf("%d ", f[i]);
    }
    getch();
}