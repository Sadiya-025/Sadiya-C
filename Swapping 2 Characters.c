/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Swapping 2 Characters
#include <stdio.h>

void swap(char* x, char* y)
{
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    char x, y;
    printf("Enter Any 2 Characters:\n");
    scanf("%c %c", &x, &y);
    printf("The Given Characters before Swapping are: %c %c\n", x, y);
    swap(&x,&y);
    printf("The Given Characters after Swapping are: %c %c", x, y);
    return 0;
}