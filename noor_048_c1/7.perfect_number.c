/*
   7. Check for Perfect Number:
   Write a C program that takes an integer as input
   and checks if it is a perfect number (a number
   that is equal to the sum of its proper divisors,
   excluding itself). Output "Perfect Number" or "Not
   a Perfect Number."
*/

#include <stdio.h>

int main()
{
    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }

    if (sum == number)
    {
        printf("%d is a Perfect Number.\n", number);
    }
    else
    {
        printf("%d is not a Perfect Number.\n", number);
    }

    return 0;
}