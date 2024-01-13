//Permutations of a Given String
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void swap(char* x, char* y)
{
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

char permute(char str[], int first, int last)
{
    int i, for_count=0;
    if (first==last)
    {
        printf("%s\n", str);
    }
    else
    {
        for (i=first;i<=last;i++)
        {
            for_count++;
            swap(str+first,str+i);
            permute(str, first+1, last); 
            //Recursion of the Function (Goes Back to the Start of Function)
            for_count++;
            swap(str+first,str+i); 
            //Backtracking
        }
    }
    return for_count;
}

int main()
{
    int i, j, for_count;
    char str[1000];
    clock_t start, end;
    float time_taken;
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
    printf("The Length of the String is %ld\n", strlen(str));
    printf("The Possible Permutations of the Given Characters are:\n");
    start=clock();
    for_count=permute(str,0,strlen(str)-1);
    end=clock();
    //Gamma Function(x+1)=x!
    printf("The No. of Possible Permutations is %.0f\n", tgamma(strlen(str)+1));
    printf("Execution Details:\nFor-Loop Usage in the Program: %d Times\n", for_count);
    time_taken=((float)end-start)/CLOCKS_PER_SEC;
    printf("Time Taken for Program Execution: %f Seconds", time_taken);
    return 0;
}
