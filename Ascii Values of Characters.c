//ASCII Values of Characters
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    char c;
    printf("The ASCII Value of all Characters from 33 to 126 are:\n");
    for (i=33;i<=126;i++)
    {
        printf("The ASCII Value of %c is %d\n", i, i);
    }
    printf("Enter a Character:\n");
    scanf("%c", &c);
    printf("The ASCII Value of the Character %c is %d\n", c, c);
    printf("Enter an ASCII Value: (Between 33 to 126)\n");
    scanf("%d", &n);
    if (n<33||n>126)
    {
        printf("Invalid Input");
        exit(0);
    }
    printf("The Character for the ASCII Value %d is %c", n, n);
    return 0;
}
