/*
11. Check if a Number is a Power of Two:
    Write a C program that takes an integer as
    input and checks if it is a power of two.
    Output "Power of Two" or "Not a Power of Two."
*/

#include <stdio.h>

int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);

    if ((x > 0) && (x & (x - 1)) == 0)
    {
        printf("%d is power of two.\n", x);
    }
    else
    {
        printf("%d is not power of two.\n", x);
    }
    return 0;
}