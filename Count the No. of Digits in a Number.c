/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Count the No. of Digits in a Number
#include <stdio.h>

int main()
{
    int n, r, count=0;
    printf("Enter the value of 'n':\n");
    scanf("%d", &n);
    printf("The No. of Digits in %d is: ",n);
    while (n>0)
    {
       r=n%10;
       n/=10;
       count++;
    }
    printf("%d", count);
    return 0;
}

