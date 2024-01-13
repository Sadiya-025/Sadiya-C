/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Divide a No. into 2 Parts Whose Sum of Digits is Max
//Example: 35=9+26; Sum of Digits of 9 and 26 is 17; 17 is the Max Value
#include <stdio.h>

int sum_of_digits(int n)
{
    int sum=0;
    if (n!=0)
    {
        while (n>0)
        {
            sum+=n%10;
            n/=10;
        }
    }
    return sum;
}
int main()
{
    int n, i, j, k=0, max, s[1000];
    printf("Enter the value of 'n':\n");
    scanf("%d", &n);
    for (i=0;i<=n;i++)
    {
        j=n-i;
        s[k]=sum_of_digits(i)+sum_of_digits(j);
        k++;
    }
    max=s[0];
    for (i=1;i<k;i++)
    {
        if (s[i]>max)
        {
            max=s[i];
        }
    }
    for (i=0;i<k;i++)
    {
        if (s[i]==max)
        {
            j=i;
            k=n-j;
            break;
        }
    }
    printf("We can write %d = %d + %d", n, j, k);
    printf("\nThe Sum of the Digits of %d is %d and The Sum of the Digits of %d is %d", j, sum_of_digits(j), k, sum_of_digits(k));
    printf("\nThe Maximum Sum of the Digits of the 2 Parts of the Number %d is %d", n, max);
    return 0;
}
