/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Expansion of 'e' upto 'n' Terms
//e=1/1!+2/2!+3/3!+...

#include <stdio.h>
int main()
{
    int n, i;
    long double p=1, sum=0;
    printf("Enter the value of 'n':\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        p*=i;
        sum+=i/p;
    }
    printf("The Value of Expansion of 'e' upto %d Terms is %Lf", n, sum);
    return 0;
}

