//Two Half Pyramids of Number
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k;
    printf("Enter the No. of Rows you Wish to Print: (1-22)\n");
    scanf("%d", &n);
    if (n>22)
    {
        printf("Invalid Input");
        exit(0);
    }
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%2d ",j);
        }
        for (j=1;j<=2*(n-i);j++)
        {
            printf("   ");
        }
        for (j=i;j>=1;j--)
        {
            printf("%2d ",j);
        }
        printf("\n");
    }
    return 0;
}
