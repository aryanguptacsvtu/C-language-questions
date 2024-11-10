#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int sum = 0;
    int remainder;

    while (n != 0)
    {
        remainder = n % 10;
        n /= 10;
        sum = sum + remainder;
    }
    printf("%d", sum);
}

/* "Sum of Digit":-
Given a positive integer N ,find sum of its digits.*/