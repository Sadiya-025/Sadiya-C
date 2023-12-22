//Pyramid of Numbers
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k, a=1;
    printf("How many Rows of the Pyramid of Numbers do you Wish to Print: (1-33)\n");
    scanf("%d", &n);
    if (n>=34)
    {
        printf("Sorry! Cannot Print Rows Above 33");
        exit(0);
    }
    for (i=1;i<=n;i++)
    {
        for (k=1;k<=n-i;k++)
        {
            printf("  ");
        }
        for (j=1;j<=i;j++)
        {
            printf("%4d", a);
            a++;
        }
        printf("\n");
    }

    return 0;
}
