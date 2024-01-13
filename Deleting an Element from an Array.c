/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Deleting an Element from an Array
#include <stdio.h>

int main()
{
    int n, i, j, a;
    char num[1000];
    printf("Enter the No. of Entities:\n");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        printf("Enter No. %d\n", i+1);
        scanf("%s", &num[i]);
    }
    printf("Which Entity Do you Wish to Delete?\n");
    scanf("%d", &a);
    for (i=-1;i<=n-a+1;i++)
    {
        num[a+i]=num[a+i+1];
    }
    printf("The Edited Array is: ");
    for (i=0;i<n-1;i++)
    {
        printf("%c ", num[i]);
    }
    return 0;
}
