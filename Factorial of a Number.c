//Factorial of a Number
#include <stdio.h>

int main()
{
    int A, i, Result=1;
    printf("Enter the value of A: \n");
    scanf("%d", &A);
    for (i=1;i<=A;i++)
    {
        Result*=i;
    }
    printf("The value of %d! is: %d", A,Result);
    return 0;
}
