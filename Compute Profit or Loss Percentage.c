/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Compute Profit or Loss Percentage
#include <stdio.h>

int main()
{
    float cp, sp, profit, loss, percent;
    printf("Enter the Cost Price of the Item:\n");
    scanf("%f", &cp);
    printf("Enter the Selling Price of the Item:\n");
    scanf("%f", &sp);
    if (cp>sp)
    {
        printf("You have incurred a Loss\n");
        loss=cp-sp;
        percent=(loss*100)/cp;
        printf("The Amount of Loss is %.2f and the Loss Percentage is %.2f Percent", loss, percent);
    }
    else if (sp>cp)
    {
        printf("You have incurred a Profit\n");
        profit=sp-cp;
        percent=(profit*100)/cp;
        printf("The Amount of Profit is %.2f and the Profit Percentage is %.2f Percent", profit, percent);
    }
    else
    printf("You have incurred neither Profit nor Loss");

    return 0;
}
