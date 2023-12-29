#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the values of x and y:");
    scanf("%d %d", &x, &y);

    if (x >= 2 * y)
        printf("yes");
    else
        printf("no");
    return 0;
}
