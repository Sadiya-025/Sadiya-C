//Sum of the digits of a Number
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, sum=0;
    printf("Enter the Value of 'n': \n");
    scanf("%d", &n);
    while (n>0)
    {
        sum+=n%10;
        n/=10;
    }
    printf("The Sum of the Digits is: %d", sum);
    getch();
}

