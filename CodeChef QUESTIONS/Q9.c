// Update the '_' in the code below

#include <stdio.h>
#include <string.h>

#define MAX_LEN 1001 // maximum length of input string

int main()
{
    int t;
    scanf("%d", &t);
    char S[MAX_LEN]; // declare a character array to store the input string
    for (int i = 0; i < t; i++)
    {
        scanf("%s", S);      // read in the input string
        int len = strlen(S); // get the length of the input string

        char X[MAX_LEN * 2]; // declare a character array to store the concatenated string
        int j;

        for (j = 0; j < len; j++)
        {
            X[j] = S[j]; // copy S into X
        }

        int k;
        for (k = 0; k < len; k++)
        {
            X[j + k] = S[k]; // concatenate S with itself
        }
        X[j + k] = '\0';   // terminate the string

        printf("%s\n", X); // output the concatenated string
    }
}


/*   "String mirror - Double strings":-

Write a program in the IDE which does the following

Accepts the count of test cases - t - in the 1st line
First line of each test case consists of a string S

You need to perform the following operation
Create a variable X which contains the string S concatenated with the string S
Output X for each test case*/