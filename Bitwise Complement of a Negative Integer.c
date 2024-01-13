//Bitwise Complement of a Negative Integer
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int bin_bitwise(int n)
{
    int i=0, j, k=0, l=0, temp, binary[1000]={}, one[1000]={}, bitwise[1000]={};
    temp=n;
    while (temp>0)
    {
        binary[i]=temp%2;
        temp/=2;
        i++;
    }
    j=(i>4?(i>8?(i>12?16:12):8):4);
    for (i=j-1;i>=0;i--)
    {
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
    if (one[k-1]==0)
    {
        one[k-1]=1;
        for (i=0;i<k;i++)
        {
            printf("%d", one[i]);
        }
    }
    else
    {
        for (i=0;i<k;i++)
        {
            if (one[i]==0)
            {
                break;
            }
            if (i==k-1)
            {
                printf("1");
            }
        }
        for (i=k-1;i>=0;i--)
        {
            if (one[i]==1)
            {
                one[i]=0;
            }
            else
            {
                one[i]=1;
                break;
            }
        }
        for (i=0;i<k;i++)
        {
            printf("%d", one[i]);
        }
    }
    printf("\nThe Bitwise Complement of the Given Number is ");
    k=~(-n);
    while (k>0)
    {
        bitwise[l]=k%2;
        k/=2;
        l++;
    }
    j=(l>4?(l>8?(l>12?16:12):8):4);
    for (i=j-1;i>=0;i--)
    {
        printf("%d", bitwise[i]);
    }
    printf("\nIn Decimal Form it is Equal to %d", ~(-n));
    return 0;
}

int main()
{
    int n;
    printf("Enter the Value of 'n': (Negative Integer)\n");
    scanf("%d", &n);
    if (n>=0)
    {
        printf("Invalid Input");
        exit(0);
    }
    n=n*(-1);
    printf("The Binary Value of the Given Number is ");
    //The Binary Value of a Negative Integer is the 2's Complement of its Absolute Value
    bin_bitwise(n);
    return 0;
}
