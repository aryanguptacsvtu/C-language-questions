// Update the program below to solve the problem

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t); // Use scanf instead of cin in C

    while (t--)
    {
        int A, B, C;
        scanf("%d %d", &A, &C); // Use scanf instead of cin in C

        if ((A % 2 == 0 && C % 2 == 0) || (A % 2 != 0 && C % 2 != 0))
        {
            B = (A + C) / 2;
            printf("%d\n", B);
        }
        else
        {
            printf("%d\n", -1);
        }
    }

    return 0;
}


/*       "Problem (Make Avg)":-

You are given 2 integers - A and C.
You need to find if there exists any integer B which meets the following condition
B must be an integer B is the average of A and C.


"Input Format":-
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two space-separated integers A and C, the given integers.

"Output Format":-
For each test case, output −1 if there exists no integer B which is the average of A and C. Else, output the value of B.*/