/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Subtraction of 2 Numbers
#include <stdio.h>

int main()
{
    int A, B, difference=0;
    printf("Enter 2 Numbers A and B: \n");
    scanf("%d%d", &A, &B);
    difference=A-B;
    printf("The value of A-B is: %d", difference);
    return 0;
}
