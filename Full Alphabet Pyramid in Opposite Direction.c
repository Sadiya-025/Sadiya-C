//Full Alphabet Pyramid in Opposite Direction
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j;
    char k;
    printf("Enter the No. of Columns you Wish to Print: (1-26)\n");
    scanf("%d", &n);
    if (n>26)
    {
        printf("Invalid Input");
        exit(0);
    }
    for (i=1;i<=n;i++)
    {
        k='A';
        for (j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for (j=1;j<=i;j++)
        {
            printf("%c ", k);
            k++;
        }
        printf("\n");
    }
    for (i=n-1;i>=1;i--)
    {
        k='A';
        for (j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for (j=i;j>=1;j--)
        {
            printf("%c ", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
