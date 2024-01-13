/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Combinations of a String (Length-3)
//We can Make 27 Combinations of Characters from the String

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i, j, k;
    char str[1000];
    printf("Enter the String of Characters:\n");
    scanf("%s", str);
    if (strlen(str)!=3)
    {
        printf("Invalid Input");
        exit(0);
    }
    printf("The Combinations of Characters in the String are:\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            for (k=0;k<3;k++)
            {
                printf("%c %c %c\n", str[i], str[j], str[k]);
            }
        }
    }
    return 0;
}