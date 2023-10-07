//Minimum No. of Notes of various Denominations that Sum up to the Given Amount
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, sum=0, denomination[]={1,2,5,10,50,100}, remainder[6], result[6];
    printf("Enter the Amount: \n");
    scanf("%d", &n);
        for (i=5;i>=0;i--)
        {
            remainder[i]=n%denomination[i];
            result[i]=n/denomination[i];
            n=remainder[i];
        }
        
        for (i=5;i>=0;i--)
        {
            printf("No. of Currency Notes with Denomination %d is %d \n", denomination[i], result[i]);
            sum+=result[i];
        }
    printf("The Smallest Number of Notes is: %d", sum);
    getch();
}


