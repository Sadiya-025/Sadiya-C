//Check if a Number/String is Palindrome or Not
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i, j=0;
    char str1[1000], str2[1000];
    printf("Enter a Number or a String of Characters:\n");
    scanf("%s", str1);
    for (i=strlen(str1)-1;i>=0;i--)
    {
        str2[j]=str1[i];
        j++;
    }
    for (i=0,j=0;i<=strlen(str1)-1&&j<=strlen(str2)-1;i++,j++)
    {
        if (str1[i]!=str2[j])
        {
            printf("The Given String is Not Palindrome");
            exit(0);
        }
    }
    printf("The Given String is Palindrome");
    return 0;
}
