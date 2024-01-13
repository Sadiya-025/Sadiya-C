/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Remove Duplicates from an Array
#include <stdio.h>

int main()
{
    int n, i, j, k;
    char num[1000];
    printf("Enter the No. of Entities:\n");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        printf("Enter No. %d\n", i+1);
        scanf("%s", &num[i]);
    }
    printf("The Given Array is: ");
    for (i=0;i<n;i++)
    {
        printf("%c ", num[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (num[i]==num[j])
            {
                for (k=j;k<n;k++)
                {
                    //Removing the Duplicate Element
                    num[k]=num[k+1];
                }
                //Decreasing the Size of the Array
                n--;
                //Preventing 'j' from Increasing by 1; To Check the Next Element
                j--;
            }
        }
    }
    printf("\nThe Edited Array Without Duplicates is: ");
    for (i=0;i<n;i++)
    {
        printf("%c ", num[i]);
    }
    return 0;
}
