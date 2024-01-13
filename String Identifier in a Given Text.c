/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//String Identifier in a Given Text
#include <stdio.h>
#include <string.h>
char string_search(char str[], char search[])
{
    int i, j=0, k, l=-1, count=0;
    for (i=0;i<strlen(str);i++)
    {
        if (str[i]==search[j])
        {
            j++;
        }
        else
        {
            j=0;
        }
        if (j==strlen(search))
        {
            j=0;
            count++;
            for (k=0;k<i-strlen(search)+1;k++)
            {
                if (str[k]==' ')
                {
                    l=k;
                }
            }
            for (k=l+1;str[k]!=' '&&str[k]!='\0';k++)
            {
                if (k>=i-strlen(search)+1&&k<=i)
                {
                    printf("%c[4m%c%c[0m", 27, str[k], 27);
                    continue;
                }
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    printf("We Detected the String '%s' %d Times in the Given Text", search, count);
}

int main()
{
   char str[10000], search[100];
   printf("Enter the String of Characters:\n");
   scanf("%[^\n]%*c", str);
   printf("Enter the Letter/Word you wish to Search:\n");
   scanf("%s", search);
   string_search(str, search);
   return 0;
}