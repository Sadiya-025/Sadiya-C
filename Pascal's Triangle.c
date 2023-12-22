//Pascal's Triangle
#include <stdio.h>
#include <stdlib.h>
int factorial(int n)
{
    int i;
    long result=1;
    for (i=1;i<=n;i++)
    {
        result*=i;
    }
    return result;
}
int find_nCr(int n, int r)
{
    long result;
    result=factorial(n)/(factorial(n-r)*factorial(r));
    return result;
}
int main()
{
    int n, i, j, k;
    printf("How many Rows of the Pascal's Triangle do you Wish to Print: (1-13)\n");
    scanf("%d", &n);
    if (n>=14)
    {
        printf("Sorry! Cannot Print Rows Above 13");
        exit(0);
    }
    for (i=0;i<n;i++)
    {
        for (k=1;k<=n-i-1;k++)
        {
            printf("  ");
        }
        for (j=0;j<=i;j++)
        {
            printf("%4d", find_nCr(i,j));
        }
        printf("\n");
    }
    return 0;
}
