#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("Largest: %d\n", a);
    }
    else if (b >= c && b >= a)
    {
        printf("Largest: %d\n", b);
    }
    else
    {
        printf("Largest: %d\n", c);
    }

    return 0;
}

//Write a C program that takes three integers as input and determines the largest among them. Print the largest number.

