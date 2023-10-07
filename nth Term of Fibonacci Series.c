/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//nth Term of Fibonacci Series
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i=0;
    int f[1000];
    printf("Which term of the Fibonacci Series do you wish to print? \n");
    scanf("%d", &n);
    f[0]=0;
    f[1]=1;
    for (i=0;i<n;i++)
    {
        f[i+2]=f[i+1]+f[i];
    }
    printf("The term no. %d of the Fibonacci Series is %d", n, f[n-1]);
    getch();
}