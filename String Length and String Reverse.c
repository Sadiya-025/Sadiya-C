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
