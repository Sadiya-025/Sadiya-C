//Magic Numbers between 1 to 'n'
#include <stdio.h>
#include <math.h>

int main()
{
    int n, t1, t2, p, j, k, num=0, digits[1000];
    printf("Enter the Value of 'n':\n");
    scanf("%d", &n);
    printf("The Magic Numbers between 1 to %d are:\n", n);
    for (k=1;k<=n;k++)
    {
        t1=k;
        int i=0, count=0, sum=0, rev=0;
        while (t1>0)
        {
            sum+=t1%10;
            t1/=10;
        }
        t2=sum;
        while (t2>0)
        { 
            digits[i]=t2%10;
            t2/=10;
            count++;
            i++;
        }
        for (j=0;j<count;j++)
        {
            rev+=digits[j]*pow(10,count-(j+1));
        }
        p=rev*sum;
        if (k==p)
        {
            printf("%d ",k);
            num++;
        }
    }
    printf("\nThere are %d Magic Numbers from 1 to %d", num, n);
    return 0;
}
