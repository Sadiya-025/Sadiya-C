//Print first 'n' Even & Odd Numbers
#include <stdio.h>

int main()
{
    int n, i, e=0, o=1;
    printf("Enter the value of 'n': \n");
    scanf("%d", &n);
    printf("The first %d Even Numbers are: ", n);
    for (i=1;i<=n;i++)
    {
        printf("%d ",e);
        e+=2;
    }
    printf("\nThe first %d Odd Numbers are: ", n);
    for (i=1;i<=n;i++)
    {
        printf("%d ",o);
        o+=2;
    }
    return 0;
}
