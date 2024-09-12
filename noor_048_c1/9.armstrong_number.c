/*
   9. Check for Armstrong Number:
   Write a C program that takes a three-digit number
   as input and checks if it is an Armstrong number
   (a number equal to the sum of the cubes of its
   digits). Output "Armstrong Number" or "Not an
   Armstrong Number."
*/

#include <stdio.h>

int main()
{
    int number, originalNumber, remainder, result = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber % 10;
        result += remainder * remainder * remainder;
        originalNumber /= 10;
    }

    if (result == number)
    {
        printf("%d is an Armstrong Number.\n", number);
    }
    else
    {
        printf("%d is not an Armstrong Number.\n", number);
    }

    return 0;
}