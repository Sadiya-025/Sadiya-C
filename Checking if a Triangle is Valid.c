//Checking if a Triangle is Valid
//The Sum of 2 Sides is Greater Than the Longest Side is Considered Valid
#include <stdio.h>

int main()
{
    float a, b, c, sum, l;
    printf("Enter the 3 Sides of the Triangle:\n");
    scanf("%f%f%f", &a, &b, &c);
    l=(a>b? (a>c? a:c):(b>c? b:c));
    sum=(l==a?b+c:(l==b?a+c:a+b));
    if (sum>l)
    {
        printf("The Triangle is Valid");
    }
    else
    printf("The Triangle is Invalid");
    return 0;
}
