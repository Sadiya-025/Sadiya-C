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
