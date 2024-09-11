/*
   5. Count Odd and Even Numbers:
   Write a C program that reads an array of integers
   and counts how many numbers are odd and how many
   are even. Output both counts.
*/

#include <stdio.h>

int main()
{
    int n, o_count = 0, e_count = 0;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements for the array: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            o_count++;
        }
        else
        {
            e_count++;
        }
    }
    printf("Total Odd numbers: %d\nTotal Even numbers: %d\n", o_count, e_count);

    return 0;
}
