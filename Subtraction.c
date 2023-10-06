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
