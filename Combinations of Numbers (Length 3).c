/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Combinations of Numbers (Length-3)
//We can Make 27 Combinations of the Given Numbers

#include <stdio.h>

int main()
{
    int i, j, k, num[3];
    printf("Enter the 3 Numbers:\n");
    for (i=0;i<3;i++)
    {
        scanf("%d", &num[i]);
    }
    printf("The Combinations of Numbers are:\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            for (k=0;k<3;k++)
            {
                printf("%d %d %d\n", num[i], num[j], num[k]);
            }
        }
    }
    return 0;
}