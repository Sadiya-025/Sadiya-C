/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Bitwise Operators
#include <stdio.h>
#include <stdlib.h>

int binary(long n)
{
    int i=0, binary[1000]={};
    if (n==0)
    {
        printf("0");
        return 0;
    }
    while(n>0)
    {
        binary[i]=n%2;
        n/=2;
        i++;
    }
    for (i=i-1;i>=0;i--)
    {
        printf("%d", binary[i]);
    }
}

int main ()
{
    int C, D;
    long A, B;
    printf("Enter 2 Numbers A and B: \n");
    scanf("%ld %ld", &A, &B);
    printf("The Binary Value of A is ");
    binary(A);
    printf("\nThe Binary Value of B is ");
    binary(B);
    printf("\nThe Value of A|B is %ld Which can be Written as ", A|B);
    binary(A|B);
    printf("\nThe Value of A&B is %ld Which can be Written as ", A&B);
    binary(A&B);
    printf("\nThe Value of A^B is %ld Which can be Written as ", A^B);
    binary(A^B);
    printf("\nHow Many Bits Do you Wish to Shift to the Left\n");
    scanf("%d", &C);
    printf("The Value of A<<%d is %ld Which can be Written as ", C, A<<C);
    binary(A<<C);
    printf("\nThe Value of B<<%d is %ld Which can be Written as ", C, B<<C);
    binary(B<<C);
    printf("\nHow Many Bits Do you Wish to Shift to the Right\n");
    scanf("%d", &D);
    printf("The Value of A>>%d is %ld Which can be Written as ", D, A>>D);
    binary(A>>D);
    printf("\nThe Value of B>>%d is %ld Which can be Written as ", D, B>>D);
    binary(B>>D);
    return 0;
}