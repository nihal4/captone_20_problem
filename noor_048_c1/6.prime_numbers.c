/*
   6. Find All Prime Numbers in an Array:
   Write a C program that takes an array of integers
   and identifies which elements are prime numbers.
   Output the prime numbers in the array.
*/
#include <stdio.h>
int main()
{
    int n, temp = 0;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements for the array: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Prime Numbers in the array: ");
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        int is_prime = 1;

        if (arr[i] < 2)
        {
            is_prime = 0;
        }
        else
        {
            for (int j = 2; j <= arr[i] / 2; j++)
            {
                if (arr[i] % j == 0)
                {
                    is_prime = 0;
                    break;
                }
            }
        }
        if (is_prime)
        {
            printf("%d ", arr[i]);
            flag = 1;
        }
    }
    if (!flag)
    {
        printf("N/A!");
    }
    printf("\n");
    return 0;
}