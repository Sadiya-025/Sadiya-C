//Identifying the Type of Character
#include <stdio.h>
int main()
{
    char c;
    printf("Enter a Character:\n");
    scanf("%c", &c);
    if (c>=65&&c<=90)
    {
        printf("You have Entered a Capital Letter");
    }
    else if (c>=97&&c<=122)
    {
        printf("You have Entered a Small Case Letter");
    }
    else if (c>=48&&c<=57)
    {
        printf("You have Entered a Digit");
    }
    else if ((c>=0&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=127))
    {
        printf("You have Entered a Special Symbol");
    }
    return 0;
}
