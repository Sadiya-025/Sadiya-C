/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Check if an Octal Number is Even or Odd
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0, digits[1000];
    long A, temp;
    printf("Enter the Octal Number:\n");
    scanf("%ld", &A);
    temp=A;
    while (A>0)
    {
        digits[i]=A%10;
        A/=10;
        i++;
    }
    for (i=i-1;i>=0;i--)
    {
        if (digits[i]==8||digits[i]==9)
        {
            printf("The Octal Number is Invalid");
            exit(0);
        }
    }
    if (digits[0]%2==0)
    {
        printf("The Given Octal Number %ld is Even", temp);
    }
    else
    printf("The Given Octal Number %ld is Odd", temp);
    return 0;
}