/*
    2. Count Positive and Negative Numbers:
    Write a C program that takes an array of 
    integers as input and counts how many 
    numbers are positive and how many are 
    negative. Output both counts.
*/

#include <stdio.h>
int main()
{
    int n, p_count = 0, n_count = 0;
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
        if (arr[i] > 0)
        {
            p_count++;
        }
        else if (arr[i] < 0)
        {
            n_count++;
        }
    }
    printf("Total Positive numbers: %d\nTotal Negetive numbers: %d\n", p_count, n_count);
    return 0;
}