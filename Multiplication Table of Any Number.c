/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Multiplication Table of Any Number
#include <stdio.h>

int main()
{
    int n,i=0, Result=0;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    
    for (i=1;i<=12;i++)
    {
        Result=n*i;
        printf("%d*%d=%d \n",n,i,Result);
    }

    return 0;
}
