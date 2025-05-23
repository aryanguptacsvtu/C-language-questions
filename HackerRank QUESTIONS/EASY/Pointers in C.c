#include <stdio.h>
#include <math.h>

void update(int *a, int *b)
{
    // Complete this function
    int q = *a;
    *a = q + *b;
    *b = abs(q - *b);
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

/* "Poniters in C":-

"Task":-
Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b. Set the value of a to their sum, and b to their absolute difference. There is no return value, and no return statement is needed.

"Input Format":-
The input will contain two integers, a and b, separated by a newline.

"Output Format":-
Modify the two values in place and the code stub main() will print their values.
Note: Input/ouput will be automatically handled. You only have to complete the function described in the 'task' section.

"Sample Input":-
4
5

"Sample Output":-
9
1
*/