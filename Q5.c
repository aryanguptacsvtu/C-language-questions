#include <stdio.h>

int main()
{
    int t;
    printf("Enter the no. of test cases:");
    scanf("%d", &t);

    // Loop for each test case
    while (t--)
    {
        int x;
        printf("Enter the value of x:");
        scanf("%d", &x);
        if (x >= 2000)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
