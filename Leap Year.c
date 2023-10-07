/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Leap Year
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Year: \n");
    scanf("%d", &n);
    if (n%100!=0)
    {
        if (n%4==0)
        {
            printf("It is a Leap Year");
        }
        else
        printf("It is not a Leap Year");
    }
    else
    {
    if (n%400==0)
    {
    printf("It is a Leap Year");
    }
    else 
    printf("It is not a Leap Year");
    }

    return 0;
}
