//Combinations of a Given String (Without Duplicates)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int com(char str[], int n)
{
    int index[n];
    int i, j, count=0;
    for (i=0;i<n;i++)
    {
       index[i]=0;
    }
    do 
    {
        for (i=0;i<n;i++)
        {
            printf("%c ", str[index[i]]);
        }
        count++;
        printf("\n");
        for (i=n-1;i>=0;i--)
        {
            index[i]++;
            if (index[i]!=n)
            {
                break;
            }
            else
            {
                index[i]=0;
            }
        }
        for (i=0;i<n;i++)
        {
            if (index[i]!=0)
            {
                break;
            }
        }
        if (i==n)
        {
            printf("The No. of Possible Combinations is %d\n", count);
            break;
        }
    }
    while(1);
}

int main()
{
    int i, j;
    char str[1000];
    printf("Enter the String of Characters:\n");
    scanf("%s", str);
    for (i=0;i<strlen(str);i++)
    {
        for (j=i+1;j<strlen(str);j++)
        {
            if (str[i]==str[j])
            {
                printf("Invalid Input: The Input Contains Repeated Characters");
                exit(0);
            }
        }
    }
    printf("The Possible Combinations of the Given Characters are:\n");
    com(str,strlen(str));
    return 0;
}
