#include <stdio.h>

int main()
{
    int a, b;
    // Take inputs and complete the code
    scanf("%d %d", &a, &b);

    int sum = a + b;
    if (sum % 2 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

//Given two space separated integers as user inputs, print YES if their sum is even else NO.