/*
8. Determine the Day of the Week:
   Write a C program that takes a number (1-7)
   as input and outputs the corresponding day
   of the week (e.g., 1 for Monday, 2 for Tuesday,
   etc.). If the number is outside the range,
   output "Invalid Day."
*/

#include <stdio.h>

int main()
{
    int day;
    printf("Enter Day(1-7): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday.\n");
        break;
    case 2:
        printf("Tuesday.\n");
        break;
    case 3:
        printf("Wednesday.\n");
        break;
    case 4:
        printf("Thursday.\n");
        break;
    case 5:
        printf("Friday.\n");
        break;
    case 6:
        printf("Saturday.\n");
        break;
    case 7:
        printf("Sunday.\n");
        break;
    default:
        printf("Invalid Day.\n");
        break;
    }
    return 0;
}