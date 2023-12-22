//LCM of 'n' Numbers
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, num[1000];
    printf("Enter the No. of Entities:\n");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        printf("Enter No. %d\n", i+1);
        scanf("%d", &num[i]);
    }
    printf("The LCM of the Given Numbers is: ");
    for (i=1;i>=1;i++)
    {
        for (j=0;j<n;j++)
        {
            if (i%num[j]!=0)
            {
                break;
            }
            if (j==n-1)
            {
                printf("%d", i);
                exit(0);
            }
        }
    }
    return 0;
}
