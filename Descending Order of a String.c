/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Descending Order of a String
#include <stdio.h>
void swap(int* x, int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int maximum(int str[], int f, int l, int initial_m)
{
    int i, max=initial_m;
    for (i=f;i<=l;i++)
    {
        if (str[i]>str[max])
        {
            max=i;
        }
    }
    return max;
}

int main()
{
    int n, i, j, str[1000];
    printf("Enter the Value of 'n':\n");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        printf("Enter No. %d:\n", i+1);
        scanf("%d", &str[i]);
    }
    printf("The Original String is: ");
    for (i=0;i<n;i++)
    {
        printf("%d ", str[i]);
    }  
    printf("\nThe Sorted String (Descending Order) is: ");
    for (j=0;j<n-1;j++)
    {
        swap(str+j,str+maximum(str, j, n-1, j));
    }
    for (i=0;i<n;i++)
    {
        printf("%d ", str[i]);
    }    
    return 0;
}