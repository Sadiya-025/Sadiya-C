//Composite Numbers from 1 to 'n'
#include <stdio.h>

int main()
{
    int n, i, j, r;
    printf("Enter the value of 'n':\n");
    scanf("%d", &n);
    printf("The Composite Numbers from 1 to %d are:\n", n);
    for (i=4; i<=n;i++)
    {
        for (j=2;j<i;j++)
        {
            r=i%j;
            if(r==0)
            {
                printf("%d ",i);
                break;
            }
        }
    }
    return 0;
}
