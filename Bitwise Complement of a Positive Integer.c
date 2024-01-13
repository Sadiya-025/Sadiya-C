//Bitwise Complement of a Postive Integer
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int add_1(int arr[], int n)
{
    int i;
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
    return 0;
}

int main()
{
    int n, i=0, j, k=0, temp, binary[1000]={}, rev_binary[1000]={};
    printf("Enter the Value of 'n': (Positive Integer)\n");
    scanf("%d", &n);
    temp=n;
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
        rev_binary[k]=binary[i];
        k++;
    }
    //Bitwise Complement is 2's Complement of ~N Which is Equal to -(N+1)
    printf("\nThe Bitwise Complement of the Given Number is -");
    add_1(rev_binary,k);
    printf("\nIn Decimal Form it is Equal to %d", ~temp);
    return 0;
}
