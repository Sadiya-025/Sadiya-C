/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Extracting the digits of a Number
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i=0, j;
    int digits[100];
    printf("Enter the value of 'n': \n");
    scanf("%d", &n);
    printf("The digits of the number %d are: ", n);
    while (n>0)
    {
        digits[i]=n%10;
        n/=10;
        i++;
    }
    for (j=i-1; j>=0;j--)
    {
        printf("%d ", digits[j]);
    }

    getch();
}



