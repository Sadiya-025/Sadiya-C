/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//String Length and String Reverse
#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char str[1000];
    printf("Enter the String of Characters:\n");
    fgets(str,1000,stdin);
    printf("The Given String is: %s", str);
    printf("The Length of the Given String is: %ld\n", strlen(str)-1);
    printf("The Reverse of the Given String is: ");
    for (i=strlen(str)-2;i>=0;i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}
