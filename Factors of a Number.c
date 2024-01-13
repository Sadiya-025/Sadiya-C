/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Factors of a Number
#include <stdio.h>

int main()
{
    int n, i, count=0;
    printf("Enter the value of 'n':\n");
    scanf("%d", &n);
    printf("The Factors of the Given Number %d are: ", n);
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nThe Given Number %d has %d Factors", n, count);
    return 0;
}