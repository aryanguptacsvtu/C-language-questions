#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the values of a and b:");
    scanf("%d %d", &a, &b);

    if (a + b + (a * b) == 111)
        printf("yes");
    else
        printf("no");
    return 0;
}
