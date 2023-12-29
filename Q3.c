#include <stdio.h>

int main()
{
    int t;
    printf("Enter the number of test cases:");
    scanf("%d", &t);

    // Loop for each test case
    
    while (t--)
    {
        int a, b;

        scanf("%d %d", &a, &b);

        // Your code for each test case goes here
        printf("%d\n", a + b);
    }
    return 0;
}