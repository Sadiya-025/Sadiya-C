//Division of 2 Numbers (All)
#include <stdio.h>
int main ()
{
    double A, B, quotient=0;
    printf("Enter 2 Numbers A and B: \n");
    scanf("%lf%lf", &A, &B);
    quotient= A/B;
    printf("The value of A/B is: %.2lf", quotient);
    return 0;
}

