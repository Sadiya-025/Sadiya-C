/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Print Paper Sizes from A0 to A8
#include <stdio.h>

int main()
{
    int l[9], b[9], i;
    l[0]=1189; b[0]=841;
    for (i=0;i<=8;i++)
    {
        if (l[i]>b[i])
        {
            l[i+1]=l[i]/2;
            b[i+1]=b[i];
        }
        else
        {
            b[i+1]=b[i]/2;
            l[i+1]=l[i];
        }
        printf("The Dimensions of A%d are %dmm x %dmm\n", i, l[i], b[i]);
    }

    return 0;
}
