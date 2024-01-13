//Inverted Full Pyramid of Alphabets
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k='A';
    printf("Enter the No. of Rows you Wish to Print: (1-26)\n");
    scanf("%d", &n);
    if (n>26)
    {
        printf("Invalid Input");
        exit(0);
    }
    for (i=n;i>=1;i--)
    {
        for (j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for (j=2*i-1;j>=1;j--)
        {
            printf("%c ", k);
        }
        k++;
        printf("\n");
    }
    return 0;
}
