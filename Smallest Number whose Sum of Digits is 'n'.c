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
