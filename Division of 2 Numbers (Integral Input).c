//Division of 2 Numbers (Integral Input)
#include <stdio.h>
int main ()
{
    int A, B;
    double quotient=0;
    printf("Enter 2 Numbers A and B: \n");
    scanf("%d%d", &A, &B);
    quotient= (double)A/B;
    printf("The value of A/B is: %.2lf", quotient);
    return 0;
}



