#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1001];
    int d[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    scanf("%[^\n]s", s);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '0')
        {
            d[0]++;
        }
        else if (s[i] == '1')
        {
            d[1]++;
        }
        else if (s[i] == '2')
        {
            d[2]++;
        }
        else if (s[i] == '3')
        {
            d[3]++;
        }
        else if (s[i] == '4')
        {
            d[4]++;
        }
        else if (s[i] == '5')
        {
            d[5]++;
        }
        else if (s[i] == '6')
        {
            d[6]++;
        }
        else if (s[i] == '7')
        {
            d[7]++;
        }
        else if (s[i] == '8')
        {
            d[8]++;
        }
        else if (s[i] == '9')
        {
            d[9]++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", d[i]);
    }
    return 0;
}


/* "Digit Frequency":-

"Input Format":-
The first line contains a string, num which is the given number.

"Output Format":-
Print ten space-separated integers in a single line denoting the frequency of each digit from 0 to 9 .

"Sample Input":-
a11472o5t6

"Sample Output":- 
0 2 1 0 1 1 1 1 0 0

"Explanation":-
In the given string:
1 occurs two times.
2, 4, 5, 6 and 7 occur one time each.
The remaining digits 0, 3, 8 and 9 don't occur at all.
*/