//Adding a Number 'n' Number of times
#include <stdio.h>

int main()
{
  int A, i, n, Result=0;
  printf("Enter the number you wish to add multiple times: \n");
  scanf("%d", &A);
  printf("Enter the number of times you wish to add it: \n");
  scanf("%d", &n);
  for (i=1; i<=n; i++)
  {
      Result += A;
  }
  printf("The value is: %d", Result);
    return 0;
}


