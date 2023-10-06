/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Addition of 2 Numbers
#include <stdio.h>
int main ()
{
    int A, B, sum=0;
    printf("Enter 2 numbers A and B: \n");
    scanf("%d%d", &A, &B);
    sum=A+B;
    printf("The value of A+B is %d", sum);
    return 0;
}

