//Check if a Number is Armstrong or Not 
#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, r, i=0, j;
    double s=0, digits[100];
    printf("Enter the value of 'n':\n");
    scanf("%d", &n);
    temp=n;
    while (n>0)
    {
        r=n%10;
        n/=10;
        digits[i]=r;
        i++;
    }
    for (j=i-1;j>=0;j--)
    {
        s+=pow(digits[j],i);
    }
    if (temp!=s)
    {
        printf("The Given Number %d is Not an Armstrong Number", temp);
    }
    else 
    printf("The Given Number %d is an Armstrong Number", temp);
    
    return 0;
}
