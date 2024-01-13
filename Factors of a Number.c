//Factors of a Number
#include <stdio.h>

int main()
{
    int n, i, count=0;
    printf("Enter the value of 'n':\n");
    scanf("%d", &n);
    printf("The Factors of the Given Number %d are: ", n);
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nThe Given Number %d has %d Factors", n, count);
    return 0;
}
