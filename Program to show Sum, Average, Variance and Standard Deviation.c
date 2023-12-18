//Program to show Sum, Average, Variance, Standard Deviation
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, i;
    float num[100], sum=0, average, r=0, variance, deviation;
    printf("Enter the No. of Entities:\n");
    scanf("%d", &n);
    for (i=0; i<n;i++)
    {
        printf("Enter No. %d:\n", i+1);
        scanf("%f", &num[i]);
    }
    for (i=0; i<n; i++)
    {
        sum+=num[i];
    }
    average= sum/(float)n;
    
    for (i=0; i<n;i++)
    {
        r+=(num[i]-average)*(num[i]-average);
    }
    variance=r/(float)n;
    deviation=sqrt (variance);
    printf("\nThe Sum of the Given Entities is %f and their Average is %f", sum, average);
    printf("\nThe Variance of the Given Entities is %f and their Standard Deviation is %f", variance, deviation);
    
    getch();
}
