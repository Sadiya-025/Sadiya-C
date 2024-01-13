/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Multiplication of 2 Matrices
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c, d, i, j, k, l, x, y;
    int m1[100][100], m2[100][100], result[100][100]={0};
    printf("Matrix No. 1:\n");
    printf("Enter the No. of Rows:\n");
    scanf("%d", &a);
    printf("Enter the No. of Columns:\n");
    scanf("%d", &b);
    printf("Matrix No. 2:\n");
    printf("Enter the No. of Rows:\n");
    scanf("%d", &c);
    printf("Enter the No. of Columns:\n");
    scanf("%d", &d);
    if (b!=c)
    {
        printf("The Matrices Cannot be Multiplied");
        exit(0);
    }
    printf("Enter Matrix No. 1:\n");
    for (i=1;i<=a;i++)
    {
        for (j=1;j<=b;j++)
        {
            printf("Enter No. [%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("The Given Matrix No. 1 is:\n");
    for (i=1;i<=a;i++)
    {
        for (j=1;j<=b;j++)
        {
            printf("%4d", m1[i][j]);
        }
        printf("\n");
    }
    printf("Enter Matrix No. 2:\n");
    for (i=1;i<=c;i++)
    {
        for (j=1;j<=d;j++)
        {
            printf("Enter No. [%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }
    printf("The Given Matrix No. 2 is:\n");
    for (i=1;i<=c;i++)
    {
        for (j=1;j<=d;j++)
        {
            printf("%4d", m2[i][j]);
        }
        printf("\n");
    }
    for (i=1;i<=a;i++)
    {
        x=i;
        for (l=1;l<=d;l++)
        {
            y=l;
            for (j=1,k=1;j<=b&&k<=c;j++,k++)
            {
                result[x][y]+=m1[i][j]*m2[k][l];
            }
        }
    }
    printf("The Multiplication of the 2 Matrices Yields the Following Matrix:\n");
    for (i=1;i<=a;i++)
    {
        for (j=1;j<=d;j++)
        {
            printf("%4d", result[i][j]);
        }
        printf("\n");
    }
    printf("The Matrix is of the Order %d x %d", a, d);
    return 0;
}