/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Checking if a Number is Magic or not
//(Sum of the digits of a Number)*(Reverse of the Sum of the digits of a Number)=Number

#include <stdio.h>
#include <math.h>
int main()
{
    int n, t1, t2, r, p, i=0, digits[1000], count=0, sum=0, rev=0;
    printf("Enter the value of 'n':\n");
    scanf("%d", &n);
    t1=n;
    while (n>0)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    printf("The Sum of the Digits of %d is %d\n", t1, sum);
    t2=sum;
    while (sum>0)
    {
        r=sum%10;
        sum/=10;
        count++;
        digits[i]=r;
        i++;
    }
    for (i=0;i<count;i++)
    {
        rev+=digits[i]*pow(10,count-(i+1));
    }
    printf("The Reverse of the Number %d is %d\n", t1, rev);
    p=rev*t2;
    printf("The Product of %d and %d is %d\n", t2, rev, p);
    if (t1==p)
    {
        printf("The Given Number %d is a Magic Number", t1);
    }
    else if (t1!=p)
    printf("The Given Number %d is Not a Magic Number", t1);
    
    return 0;
}
