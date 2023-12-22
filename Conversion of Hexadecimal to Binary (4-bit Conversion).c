//Conversion of Hexadecimal to Binary (4 Bit Conversion)
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0, j;
    long binary[1000];
    char hexa[1000]; 
    printf("Enter the value of 'n':\n");
    scanf("%s", hexa);
    for (j=0; hexa[j]!='\0';j++)
    {
        if (hexa[j]<=47||hexa[j]>=58&&hexa[j]<=64||hexa[j]>=71)
        {
            printf("Invalid Input");
            exit(0);
        }
    }
    printf("The Binary Value for %s is ", hexa);
    while (hexa[i])
    {
        switch (hexa[i])
        {
            case '0':
            printf("0000");
            break;
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            j=0;
            hexa[i]=hexa[i]-48;
            while (hexa[i]>0)
            {
                binary[j]=hexa[i]%2;
                hexa[i]/=2;
                j++;
            }
            for (j=3;j>=0;j--)
            {
                printf("%ld", binary[j]);
            }
            break;
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
            j=0;
            hexa[i]=hexa[i]-55;
            while (hexa[i]>0)
            {
                binary[j]=hexa[i]%2;
                hexa[i]/=2;
                j++;
            }
            for (j=3;j>=0;j--)
            {
                printf("%ld", binary[j]);
            }
            break;
        }
        i++;
    }
    return 0;
}
