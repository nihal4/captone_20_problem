/*
   3. Find the Second Largest Number:
   Write a C program that reads an array of
   integers and finds the second largest
   number in the array. Output the second
   largest number.
   */

#include <stdio.h>
int main()
{
    int n;
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
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Second largest element in the array is: %d\n", arr[n - 2]);
    return 0;
}