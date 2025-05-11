#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */

    for (i = num - 1; i >= 0; i--)
    {
        printf("%d ", *(arr + i));
    }
    return 0;
}

/* "Array Reversal":-

"Input Format":-
The first line contains an integer,n, denoting the size of the array. The next line contains n space-separated integers denoting the elements of the array.

"Output Format":-
The output is handled by the code given in the editor, which would print the array.

"Sample Input":-
6
16 13 7 2 1 12

"Sample Output":-
12 1 2 7 13 16
*/
