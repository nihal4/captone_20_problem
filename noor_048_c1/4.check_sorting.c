/*
   4. Check if Array is Sorted:
   Write a C program that checks whether a
   given array of integers is sorted in
   ascending order. Output "Yes" if the array 
   is sorted, otherwise output "No."
   */
#include <stdio.h>
int main()
{
    int n, sorted = 1;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("Array must contain at least two elements.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d elements for the array: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            {
                sorted = 0;
                break;
            }
    }
    if (sorted)
        printf("Yes!\n");
    else
        printf("No!\n");
    return 0;
}