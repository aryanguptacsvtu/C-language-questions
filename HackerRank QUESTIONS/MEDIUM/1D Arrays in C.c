#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int sum = 0;
    int a[1000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("%d", sum);
    return 0;
}

/*  "1D Arrays in C":-

"Input Format":-
The first line contains an integer,n .
The next line contains n space-separated integers.

"Output Format":-
Print the sum of the integers in the array.

"Sample Input":-
6
16 13 7 2 1 12

"Sample Output":-
51
*/