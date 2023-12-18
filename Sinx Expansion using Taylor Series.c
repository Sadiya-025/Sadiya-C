//Sinx Expansion Using Taylor Series
//Sinx = x/1! - x^3/3! + x^5/5! - x^7/7! +...
#include <stdio.h>
#include <math.h>

int main ()
{
  int n, i, j, k, l, f[1000], factorial=1;
  float x, a=0.0, b=0.0, answer;
  printf("Enter the value of 'x':\n");
  scanf("%f", &x);
  printf("Enter the Limit upto which you want to Expand the Series:\n");
  scanf("%d", &n);
  for (i=1;i<=(2*n)-1;i++)
  {
      for (j=1;j<=i;j++)
      {
          factorial*=j;
      }
      f[i]=factorial;
      factorial=1;
  }
  for (k=1; k<=(2*n)-1; k=k+4)
  {
      a+=(pow(x,k))/f[k];
  }
  for (l=3; l<=(2*n)-1; l=l+4)
  {
      b+=(pow(x,l))/f[l];
  }
  answer=a-b;
  printf("The Value of Sin(%f) Calculated upto a Limit of %d is %f", x, n, answer);
  return 0;
}

