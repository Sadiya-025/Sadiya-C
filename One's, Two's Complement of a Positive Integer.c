/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//One's, Two's Complement of a Postive Integer
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int two_c(int arr[], int n)
{
    int i, decimal=0;
    if (arr[n-1]==0)
    {
        arr[n-1]=1;
        for (i=0;i<n;i++)
        {
            printf("%d", arr[i]);
        }
    }
    else
    {
        for (i=0;i<n;i++)
        {
            if (arr[i]==0)
            {
                break;
            }
            if (i==n-1)
            {
                printf("1");
                decimal=pow(2,n);
            }
        }
        for (i=n-1;i>=0;i--)
        {
            if (arr[i]==1)
            {
                arr[i]=0;
            }
            else
            {
                arr[i]=1;
                break;
            }
        }
        for (i=0;i<n;i++)
        {
            printf("%d", arr[i]);
        }
    }
    for (i=0;i<n;i++)
    {
        decimal+=arr[i]*pow(2,n-i-1);
    }
    printf("\nIn Decimal Form it is Equal to %d", decimal);
    return 0;
}

int main()
{
    int n, i=0, j, k=0, decimal=0, binary[1000]={}, one[1000]={};
    printf("Enter the Value of 'n': (Positive Integer)\n");
    scanf("%d", &n);
    if (n<0)
    {
        printf("Invalid Input");
        exit(0);
    }
    printf("The Binary Value of the Given Number is ");
    while (n>0)
    {
        binary[i]=n%2;
        n/=2;
        i++;
    }
    j=(i>4?(i>8?(i>12?16:12):8):4);
    for (i=j-1;i>=0;i--)
    {
        printf("%d", binary[i]);
        if (binary[i]==1)
        {
            one[k]=0;
            k++;
        }
        else
        {
            one[k]=1;
            k++;
        }
    }
    printf("\nThe One's Complement of the Given Number is ");
    for (i=0;i<k;i++)
    {
        printf("%d", one[i]);
        decimal+=one[i]*pow(2,k-i-1);
    }
    printf("\nIn Decimal Form it is Equal to %d", decimal);
    //2's Complement is ~N+1
    printf("\nThe 2's Complement of the Given Number is ");
    two_c(one,k);
    return 0;
}