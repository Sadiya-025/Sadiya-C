/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Ascending Order of a String
#include <stdio.h>
void swap(int* x, int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int minimum(int str[], int f, int l, int initial_m)
{
    int i, min=initial_m;
    for (i=f;i<=l;i++)
    {
        if (str[i]<str[min])
        {
            min=i;
        }
    }
    return min;
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
    printf("\nThe Sorted String (Ascending Order) is: ");
    for (j=0;j<n-1;j++)
    {
        swap(str+j,str+minimum(str, j, n-1, j));
    }
    for (i=0;i<n;i++)
    {
        printf("%d ", str[i]);
    }    
    return 0;
}