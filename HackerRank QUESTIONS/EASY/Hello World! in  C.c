#include <stdio.h>
int main()
{
    char s[100];

    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n%s", s);

    return 0;
}

/*    -----"Hello World!" in C-----

"Task":-
This challenge requires you to print 'Hello World' on a single line, and then print the already provided input string to stdout

"Function Description":-
Complete the main() function below.
The main() function has the following input:
string s: a string

"Prints":-
*two strings: * "Hello, World!" on one line and the input string on the next line.

"Input Format":-
There is one line of text,s .

"Sample Input":-
Welcome to C programming.

"Sample Output":- 
Hello, World!
Welcome to C programming.
*/