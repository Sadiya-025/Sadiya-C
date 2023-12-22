/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Conversion of Octal to Binary
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i=0, j=0, count=0;
    long A, temp, decimal=0, digits[1000], binary[1000];
    printf("Enter the Octal Number:\n");
    scanf("%ld", &A);
    temp=A;
    while (A>0)
    {
        digits[i]=A%10;
        A=A/10;
        count++;
        i++;
    }
    for (i=0;i<count;i++)
    {
        decimal+=digits[i]*pow(8,i);
        if (digits[i]==8||digits[i]==9)
        {
            printf("The Octal Number is Invalid");
            exit(0);
        }
    }
    while (decimal>0)
    {
        binary[j]=decimal%2;
        decimal/=2;
        j++;
    }
    printf("The Binary Value of %ld is ", temp);
    if (temp==0)
    {
        printf("0");
    }
    for (j=j-1;j>=0;j--)
    {
        printf("%ld", binary[j]);
    }
    return 0;
}
