#include <stdio.h>

int main()
{
    int sum = 0;
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int i = 2;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 2;
    }
    printf("%d", sum);
}

/*"Even Sum":-
Write a C program that calculates and prints the sum of all even numbers from 1 to a given positive integer n. Use a while loop to iterate through the numbers.*/