//Addition of 2 Matrices
#include <stdio.h>

int main()
{
    int a, b, i, j, n;
    int m1[100][100], m2[100][100], result[100][100];
    printf("Enter the No. of Rows:\n");
    scanf("%d", &a);
    printf("Enter the No. of Columns:\n");
    scanf("%d", &b);
    printf("Matrix No. 1:\n");
    for (i=1;i<=a;i++)
    {
        for (j=1;j<=b;j++)
        {
            printf("Enter No. [%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Matrix No. 2:\n");
    for (i=1;i<=a;i++)
    {
        for (j=1;j<=b;j++)
        {
            printf("Enter No. [%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }
    for (i=1;i<=a;i++)
    {
        for (j=1;j<=b;j++)
        {
            result[i][j]=m1[i][j]+m2[i][j];
        }
    }
    printf("The Addition of the 2 Matrices Yields the Following Matrix:\n");
    for (i=1;i<=a;i++)
    {
        for (j=1;j<=b;j++)
        {
            printf("%4d", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
