/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Remainder when a Number is divided by another
#include <stdio.h>
int main ()
{
    int A, B, Remainder=0;
    printf("Enter 2 Numbers A and B: \n");
    scanf("%d%d", &A, &B);
    Remainder=A%B;
    printf("The value of the remainder when A is divided by B is: %d", Remainder);
    return 0;
}
