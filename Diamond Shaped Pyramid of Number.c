//Diamond Shaped Pyramid of Number
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k, a;
    printf("Enter the No. of Rows you Wish to Print: (Odd Numbers) (1-29)\n");
    scanf("%d", &n);
    if (n%2==0||n>=30)
    {
        printf("Invalid Input");
        exit(0);
    }
    k=(n+1)/2;
    for (i=1;i<=k;i++)
    {
        a=1;
        for (j=1;j<=n-i;j++)
        {
            printf("   ");
        }
        for (j=1;j<=2*i-1;j++)
        {
            printf("%3d", a);
            a++;
        }
        printf("\n");
    }
    for (i=k-1;i>=1;i--)
    {
        a=1;
        for (j=1;j<=n-i;j++)
        {
            printf("   ");
        }
        for (j=2*i-1;j>=1;j--)
        {
            printf("%3d", a);
            a++;
        }
        printf("\n");
    }

    return 0;
}
