//Convert Celcius to Fahrenheit or Vice Versa
#include <stdio.h>

int main()
{
    float c,f;
    char choice,Y,N;
    printf("Do you want to Convert Celcius to Fahrenheit? Y/N\n");
    scanf("%c", &choice);
    if (choice=='Y')
    {
        printf("Enter the Value in Celcius:\n");
        scanf("%f", &c);
        f=((9*c)/5)+32;
        printf("The Value of %f Celcius in Fahrenheit is %f",c,f);
    }
    else if (choice=='N')
    {
        printf("Then you wish to Convert Fahrenheit to Celcius\n");
        printf("Enter the Value in Fahrenheit:\n");
        scanf("%f", &f);
        c=((f-32)*5)/9;
        printf("The Value of %f Fahrenheit in Celcius is %f",f,c);
    }
    else
    printf("Invalid Input");
    
    return 0;
}
