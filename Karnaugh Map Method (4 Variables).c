//Karnaugh Map Method (4 Variables)
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int print(int str[], int n)
{
    int i, j;
    char arr[4];
    char labels[4][2]={"00", "01", "11", "10"};
    printf("The Karnaugh Map is as Follows:\n");
    for(i=0;i<4;i++)
    {
        printf("\t%c", labels[i][0]);
        printf("%c", labels[i][1]);
    }
    for (i=0;i<4;i++)
    {
        char arr[]={' ',' ',' ',' '};
        printf("\n%c", labels[i][0]);
        printf("%c\t", labels[i][1]);
        for(j=0;j<n;j++)
        {
            if(i==0)
            {
                switch(str[j])
                {
                    case 0:
                    arr[0]='1';
                    break;
                    case 1:
                    arr[1]='1';
                    break;
                    case 2:
                    arr[3]='1';
                    break;
                    case 3:
                    arr[2]='1';
                    break;
                }
            }
            if(i==1)
            {
                switch(str[j])
                {
                    case 4:
                    arr[0]='1';
                    break;
                    case 5:
                    arr[1]='1';
                    break;
                    case 6:
                    arr[3]='1';
                    break;
                    case 7:
                    arr[2]='1';
                    break;
                }
            }
            if(i==2)
            {
                switch(str[j])
                {
                    case 12:
                    arr[0]='1';
                    break;
                    case 13:
                    arr[1]='1';
                    break;
                    case 14:
                    arr[3]='1';
                    break;
                    case 15:
                    arr[2]='1';
                    break;
                }
            }
            if(i==3)
            {
                switch(str[j])
                {
                    case 8:
                    arr[0]='1';
                    break;
                    case 9:
                    arr[1]='1';
                    break;
                    case 10:
                    arr[3]='1';
                    break;
                    case 11:
                    arr[2]='1';
                    break;
                }
            }
        }
        for (j=0;j<4;j++)
        {
            printf("%c\t", arr[j]);
        }
        printf("\n");
        for (j=0;j<17;j++)
        {
            printf("--");
        }
    }
}

int sort(int str[], int n)
{
    int i, j, temp;
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("The Given List of Minterms are:\n");
    for (i=0;i<n;i++)
    {
        printf("%d ", str[i]);
    }
    printf("\n");
    print(str, n);
}


int duplicates(int terms[], int n)
{
    int i, j, k;
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (terms[i]==terms[j])
            {
                for (k=j;k<n;k++)
                {
                    //Removing the Duplicate Element
                    terms[k]=terms[k+1];
                }
                //Decreasing the Size of the Array
                n--;
                //Preventing 'j' from Increasing by 1; To Check the Next Element
                j--;
            }
        }
    }
    sort(terms, n);
}

int main()
{
    int i, j, m, terms[100];
    printf("\t\t\t\t\t\tWelcome to 4-Variable Karnaugh Map Program\n");
    //Include Minterms or Maxterms
    printf("Enter the No. of Minterms:\n");
    scanf("%d", &m);
    if(m>16)
    {
        printf("Invalid Input");
        exit(0);
    }
    for (i=0;i<m;i++)
    {
        printf("Enter Minterm No. %d:\n", i+1);
        scanf("%d", &terms[i]);
    }
    for (i=0;i<m;i++)
    {
        if(terms[i]>15)
        {
            printf("Minterms Value at Position %d is Greater than 15!", i+1);
            exit(0);
        }
    }
    duplicates(terms, m);
    return 0;
}
