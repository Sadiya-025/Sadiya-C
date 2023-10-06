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
