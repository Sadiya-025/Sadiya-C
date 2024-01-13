//Inverted Full Pyramid of Star
#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the No. of Rows you Wish to Print:\n");
    scanf("%d", &n);
    for (i=n;i>=1;i--)
    {
        for (j=n-i;j>=1;j--)
        {
            printf(" ");
        }
        for (j=i;j>=1;j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

