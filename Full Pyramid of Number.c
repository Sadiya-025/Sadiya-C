//Full Pyramid of Number
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k;
    printf("Enter the No. of Rows you Wish to Print: (1-23)\n");
    scanf("%d", &n);
    if (n>23)
    {
        printf("Invalid Input");
        exit(0);
    }
    for (i=1;i<=n;i++)
    {
        k=i;
        for (j=1;j<=n-i;j++)
        {
            printf("   ");
        }
        for (j=1;j<=2*i-1;j++)
        {
            printf("%2d ", k);
        }
        printf("\n");
    }

    return 0;
}
