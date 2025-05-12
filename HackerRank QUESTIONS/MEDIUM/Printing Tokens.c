#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    // Write your logic to print the tokens of the sentence here.

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ')
        {
            printf("%c", s[i]);
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}

/* "Printing Tokens":-

"Input Format":-
The first and only line contains a sentence,s.

"Output Format":-
Print each word of the sentence in a new line.

"Sample Input":-
This is C

"Sample Output":-
This
is
C
*/