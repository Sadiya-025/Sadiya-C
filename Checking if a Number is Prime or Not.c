//Checking if a Number is Prime or Not
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, r;
    printf("Enter the value of 'n':\n");
    scanf("%d", &n);
    for (i=2;i<n;i++)
    {
        r=n%i;
        if (r==0)
        {
            printf("The given number %d is Not Prime", n);
            exit(0);
        }
    }
    printf("The given number %d is Prime", n);
    return 0;
}
