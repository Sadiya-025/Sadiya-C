//Reversing the digits of a Number
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, r;
    printf("Enter the value of 'n': \n");
    scanf("%d", &n);
    printf("The reverse of the number %d is: ", n);
   while (n>0)
   {
       r=n%10;
       n/=10;
       printf("%d", r);
   }
    getch();
}

