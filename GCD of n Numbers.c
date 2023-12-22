/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//GCD of 'n' Numbers
#include <stdio.h>

int main()
{
    int n, i, j, k=0, min, num[1000], hcf[1000];
    printf("Enter the No. of Entities:\n");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        printf("Enter No. %d\n", i+1);
        scanf("%d", &num[i]);
    }
    printf("The HCF of the Given Numbers is: ");
    min=num[0];
    for (i=1;i<n;i++)
    {
        if (num[i]<min)
        {
            min=num[i];
        }
    }
    for (i=1;i<=min;i++)
    {
        for (j=0;j<n;j++)
        {
            if (num[j]%i!=0)
            {
                break;
            }
            if (j==n-1)
            {
               hcf[k]=i;
               k++;
            }
        }
    }
    printf("%d", hcf[k-1]);
    return 0;
}
