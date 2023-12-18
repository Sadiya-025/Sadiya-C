//Prime Numbers between 1 to 'n'
#include <stdio.h>

int main() 
{
    int n, i, j, r;
    printf("Enter the value of 'n':\n");
    scanf("%d", &n);
    printf("The Prime Numbers from 1 to %d are:\n", n);
    for (i=2;i<=n;i++)
    {
        for (j=2; j<i;j++)
        {
            r=i%j;
            if (r==0)
            {
                break;
            }
        }
        if (i==j)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
