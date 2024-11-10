#include <stdio.h>

int main()
{
    int num, i = 2;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("NO");
    }
    else
    {
        int is_prime = 1;
        while (i <= num / 2)
        {
            if (num % i == 0)
            {
                is_prime = 0;
                break;
            }
            i++;
        }
        if (is_prime)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }

    return 0;
}

/*"Prime Check":-
Write a program using while loop to check if the positive number N is prime or not.
Output on a single line, YES if N is prime, else NO.*/