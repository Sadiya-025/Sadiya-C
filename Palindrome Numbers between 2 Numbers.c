/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Palindrome Numbers between 2 Numbers
#include <stdio.h>

int main()
{
    int a, b, i, j, k, l, temp, count=0, digits[1000];
    printf("Enter the Lower Limit:\n");
    scanf("%d", &a);
    printf("Enter the Upper Limit:\n");
    scanf("%d", &b);
    printf("The Palindrome Numbers from %d to %d are:\n", a, b);
    for (i=a;i<=b;i++)
    {
        int j=0;
        temp=i;
        while (temp>0)
        {
            digits[j]=temp%10;
            temp/=10;
            j++;
        }
        for (k=j-1,l=0;k>=0&&l<=j-1;k--,l++)
        {
            if (digits[k]!=digits[l])
            {
                break;
            }
            if (k==0&&l==j-1)
            {
                printf("%d ", i);
                count++;
            }
        }
    }
    printf("\nThere are %d Palindrome Numbers between %d and %d", count, a, b);
    return 0;
}