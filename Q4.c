#include <stdio.h>

int main()
{
    int t;
    printf("Enter the no. of test cases:");
    scanf("%d", &t);

    // Loop for each test case
    while (t--)
    {
        int x, y;

        printf("Enter the values of x and y:");
        scanf("%d %d", &x, &y);
        if ((x + y) > 6)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
