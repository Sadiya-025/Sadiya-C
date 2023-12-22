//Conversion of Binary to Hexadecimal 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i=0, j=0, k, count=0, hexa[1000];
    long A, temp, decimal=0, digits[1000];
    printf("Enter the Binary Number:\n");
    scanf("%ld", &A);
    temp=A;
    while (A>0)
    {
        digits[i]=A%10;
        A=A/10;
        count++;
        i++;
    }
    for (i=0;i<count;i++)
    {
        decimal+=digits[i]*pow(2,i);
        if (digits[i]!=1&&digits[i]!=0)
        {
            printf("The Binary Number is Invalid");
            exit(0);
        }
    }
    while (decimal>0)
    {
        hexa[j]=decimal%16;
        decimal/=16;
        j++;
    }
    for (i=j-1;i>=0;i--)
    {
        for (k=10;k<=15;k++)
        {
            if (hexa[i]==k)
            {
                hexa[i]+=55;
            }
        }
    }
    printf("The Hexadecimal Value of %ld is ", temp);
    for (j=j-1;j>=0;j--)
    {
       if (hexa[j]>=65&&hexa[j]<=70)
       {
           printf("%c", hexa[j]);
           continue;
       }
       printf("%d", hexa[j]);
    }
    return 0;
}    
