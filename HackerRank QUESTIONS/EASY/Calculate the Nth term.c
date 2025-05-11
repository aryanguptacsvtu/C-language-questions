#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

int find_nth_term(int n, int a, int b, int c)
{
    // Write your code here.

    if (n == 1)
    {
        return a;
    }
    if (n == 2)
    {
        return b;
    }
    if (n == 3)
    {
        return c;
    }
    return find_nth_term(n - 1, a, b, c) + find_nth_term(n - 2, a, b, c) + find_nth_term(n - 3, a, b, c);
}

int main()
{
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}

/* "Calculate the Nth term":-

"Task":-
There is a series, S, where the next term is the sum of pervious three terms. Given the first three terms of the series,a,b, and c respectively, you have to output the nth term of the series using recursion.
Recursive method for calculating nth term is given below.

S(n)= a , if n=1
S(n)= b , if n=2
S(n)= c , if n=3
S(n)= S(n−1)+S(n−2)+S(n−3) , otherwise

"Input Format":-
The first line contains a single integer,n.
The next line contains 3 space-separated integers,a,b, and c.

"Output Format":-
Print the nth term of the series,S(n).

"Sample Input ":-
5
1 2 3

"Sample Output ":-
11
*/