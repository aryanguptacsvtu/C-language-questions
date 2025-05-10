#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    int sum = 0;
    scanf("%d", &n);
    // Complete the code to calculate the sum of the five digits on n.
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}

/* "Sum of Digits of a Five Digit Number":-

"Task":-
Given a five digit integer, print the sum of its digits.

"Input Format":-
The input contains a single five digit number,n.

"Output Format":-
Print the sum of the digits of the five digit number.

"Sample Input":-
10564

"Sample Output":-
16
*/