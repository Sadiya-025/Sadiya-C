/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Maximum & Minimum Value of an Array
#include <stdio.h>

int main()
{
    int n, i; 
    float num[100], max, min;
    printf("Enter the No. of Entities:\n");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        printf("Enter No. %d:\n", i+1);
        scanf("%f", &num[i]);
    }
    max=num[0];
    for (i=1;i<n;i++)
    {
        if (num[i]>max)
        {
            max=num[i];
        }
    }
    min=num[0];
    for (i=1;i<n;i++)
    {
        if (num[i]<min)
        {
            min=num[i];
        }
    }
    printf("The Maximum Value from the Array is: %f\n", max);
    printf("The Minimum Value from the Array is: %f\n", min);
    return 0;
}
