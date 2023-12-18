/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Reversing an Array
#include <stdio.h>

int main()
{
    int n, i, j, temp, num[100];
    printf("Enter the No. of Entities:\n");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        printf("Enter No. %d:\n", i+1);
        scanf("%d", &num[i]);
    }
    printf("The Given Array is: ");
    for (i=0;i<n;i++)
    {
        printf("%d ", num[i]);
    }
    printf("\nThe Reversed Array is: ");
    for (i=0;i<n/2;i++)
    {
        temp=num[i];
        num[i]=num[n-i-1];
        num[n-i-1]=temp;
    }
    for (i=0;i<n;i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}