/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Armstrong Numbers between 2 Numbers
#include <stdio.h>
#include <math.h>

int main()
{
    int temp, i, r, u, l, number=0;
    printf("Enter the Lower Limit:\n");
    scanf("%d", &l);
    printf("Enter the Upper Limit:\n");
    scanf("%d", &u);
    printf("The Armstrong Numbers from %d to %d are:\n", l, u);
    for (i=l;i<=u;i++)
    {
        temp=i;
        int count=0, s=0;
        while (temp>0)
        {
            r=temp%10;
            temp/=10;
            count++;
        }
        temp=i;
        while (temp>0)
        {
            r=temp%10;
            temp/=10;
            s+=pow(r,count);
        }
        if (i==s)
        {
            printf("%d ", i);
            number++;
        }
    }
    printf("\nThere are %d Armstrong Numbers between %d to %d", number, l, u);
    return 0;
}