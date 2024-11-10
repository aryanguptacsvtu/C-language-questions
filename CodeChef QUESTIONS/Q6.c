#include <stdio.h>

int main()
{
    int num, reversedNum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    printf("%d", reversedNum);

    return 0;
}

/*"Reverse a Number":-
Write a C program that takes an integer as input and prints its reverse. Use a while loop for the reversal process.*/