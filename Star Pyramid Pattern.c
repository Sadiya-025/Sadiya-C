/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Star Pyramid Pattern
#include <stdio.h>

int main()
{
    int n, i, j, choice;
    printf("The Pyramid Patterns Offered are Half Pyramid, Inverted Half Pyramid, Right Half Pyramid, Inverted Right Half Pyramid\n");
    printf("Which Pyramid Pattern do you Wish to Print? (1-4)  ");
    scanf("%d", &choice);
    if (choice==1)
    {
        printf("Enter the No. of Rows you Wish to Print:\n");
        scanf("%d", &n);
        for (i=1;i<=n;i++)
        {
            for (j=1;j<=i;j++)
            {
                printf("* ");
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
            for (j=i;j>=1;j--)
            {
                printf("* ");
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
            for (j=1;j<=n-i;j++)
            {
                printf("  ");
            }
            for (j=i;j>=1;j--)
            {
                printf("* ");
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
            for (j=1;j<=n-i;j++)
            {
                printf("  ");
            }
            for (j=i;j>=1;j--)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else
    printf("Invalid Input");
    return 0;
}