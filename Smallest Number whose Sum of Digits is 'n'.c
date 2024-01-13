/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Smallest Number whose Sum of Digits is 'n'
#include <stdio.h>
#include <string.h>
int sum_of_digits(int n)
{
    int sum=0;
    while (n>0)
    {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n, i;
    printf("Enter the Value of 'n':\n");
    scanf("%d", &n);
    for (i=0;i>=0;i++)
    {
        if (sum_of_digits(i)==n)
        {
            printf("The Smallest Number whose Sum of Digits is %d is %d", n, i);
            break;
        }
    }
    return 0;
}