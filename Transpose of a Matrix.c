//Transpose of a Matrix
#include <stdio.h>

int main()
{
    int a, b, i, j;
    int matrix[100][100];
    printf("Enter the No. of Rows:\n");
    scanf("%d", &a);
    printf("Enter the No. of Columns:\n");
    scanf("%d", &b);
    for (i=1;i<=a;i++)
    {
        for (j=1;j<=b;j++)
        {
            printf("Enter No. [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The Given Matrix is:\n");
    for (i=1;i<=a;i++)
    {
        for (j=1;j<=b;j++)
        {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    printf("The Transpose of the Given Matrix is:\n");
    for (j=1;j<=b;j++)
    {
        for (i=1;i<=a;i++)
        {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
