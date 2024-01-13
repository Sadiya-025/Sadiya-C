/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Combinations of a Given String (With Duplicates)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int com(char str[], int a, int n)
{
    int index[n];
    int i, j, count=0;
    for (i=0;i<n;i++)
    {
       index[i]=0;
    }
    do
    {
        for (i=0;i<n;i++)
        {
            printf("%c ", str[index[i]]);
        }
        count++;
        printf("\n");
        for (i=n-1;i>=0;i--)
        {
            index[i]++;
            if (index[i]!=a)
            {
                break;
            }
            else
            {
                index[i]=0;
            }
        }
        for (i=0;i<n;i++)
        {
            if (index[i]!=0)
            {
                break;
            }
        }
        if (i==n)
        {
            printf("The No. of Possible Combinations is %d\n", count);
            break;
        }
    }
    while(1);
}

int rem_duplicate(char str[], int n)
{
    int i, j, k, a;
    a=strlen(str);
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (str[i]==str[j])
            {
                for (k=j;k<n;k++)
                {
                    //Removing the Duplicate Element
                    str[k]=str[k+1];
                }
                //Decreasing the Size of the Array
                n--;
                //Preventing 'j' from Increasing by 1; To Check the Next Element
                j--;
            }
        }
    }
    com(str,n,a);
}

int main()
{
    int i, j, n;
    char str[1000];
    printf("Enter the String of Characters:\n");
    scanf("%s", str);
    printf("The Possible Combinations of the Given Characters are:\n");
    rem_duplicate(str,strlen(str));
    return 0;
}