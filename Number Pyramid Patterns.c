/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Number Pyramid Patterns
#include <stdio.h>

int main()
{
    int n, i, j, k, choice;
    printf("The Pyramid Patterns Offered are Half Pyramid, Inverted Half Pyramid, Right Half Pyramid, Inverted Right Half Pyramid\n");
    printf("Which Pyramid Pattern do you Wish to Print? (1-4)  ");
    scanf("%d", &choice);
    if (choice==1)
    {
       printf("Enter the No. of Rows you Wish to Print:\n");
       scanf("%d", &n);
       for (i=1;i<=n;i++)
       {
           k=1;
           for (j=i;j>=1;j--)
           {
               printf("%d ", k);
               k++;
           }
           printf("\n");
       }
    }
    else if (choice==2)
    {
        printf("Enter the No. of Rows you Wish to Print:\n");
        scanf("%d", &n);
        for (i=n;i>=1;i--)
        {
            k=i;
            for (j=i;j>=1;j--)
            {
                printf("%d ", k);
                k--;
            }
            printf("\n");
        }
    }
    else if (choice==3)
    {
        printf("Enter the No. of Rows you Wish to Print:\n");
        scanf("%d", &n);
        for (i=1;i<=n;i++)
        {
            k=1;
            for (j=1;j<=n-i;j++)
            {
                printf("  ");
            }
            for (j=i;j>=1;j--)
            {
                printf("%d ", k);
                k++;
            }
            printf("\n");
        }
    }
    else if (choice==4)
    {
        printf("Enter the No. of Rows you Wish to Print:\n");
        scanf("%d", &n);
        for (i=n;i>=1;i--)
        {
            k=1;
            for (j=1;j<=n-i;j++)
            {
                printf("  ");
            }
            for (j=i;j>=1;j--)
            {
                printf("%d ", k);
                k++;
            }
            printf("\n");
        }
    }
    else
    printf("Invalid Input");
    return 0;
}