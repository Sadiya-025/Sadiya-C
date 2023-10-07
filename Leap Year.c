//Leap Year
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Year: \n");
    scanf("%d", &n);
    if (n%100!=0)
    {
        if (n%4==0)
        {
            printf("It is a Leap Year");
        }
        else
        printf("It is not a Leap Year");
    }
    else
    {
    if (n%400==0)
    {
    printf("It is a Leap Year");
    }
    else 
    printf("It is not a Leap Year");
    }

    return 0;
}
