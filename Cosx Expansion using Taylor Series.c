/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Cosx Expansion Using Taylor Series
//Cosx = 1 - x^2/2! + x^4/4! - x^6/6! +...
#include <stdio.h>
#include <math.h>

int main ()
{
  int n, i, j, k, l, f[1000], factorial=1;
  float x, a=1.0, b=0.0, answer;
  printf("Enter the value of 'x':\n");
  scanf("%f", &x);
  printf("Enter the Limit upto which you want to Expand the Series:\n");
  scanf("%d", &n);
  for (i=1;i<=(2*n)-2;i++)
  {
      for (j=1;j<=i;j++)
      {
          factorial*=j;
      }
      f[i]=factorial;
      factorial=1;
  }
  for (k=4; k<=(2*n)-2; k=k+4)
  {
      a+=(pow(x,k))/f[k];
  }
  for (l=2; l<=(2*n)-2; l=l+4)
  {
      b+=(pow(x,l))/f[l];
  }
  answer=a-b;
  printf("The Value of Cos(%f) Calculated upto a Limit of %d is %f", x, n, answer);
  return 0;
}
