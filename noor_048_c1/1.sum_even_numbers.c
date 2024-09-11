/*
   1. Sum of Even Numbers:
   Write a C program that reads an array of integers, 
   then calculates and outputs the sum of all the 
   even numbers in the array.
 */

#include <stdio.h>
int main()
{
    int n, sum = 0;
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
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }
    printf("Sum of the even numbers from the array is: %d.\n", sum);
    return 0;
}