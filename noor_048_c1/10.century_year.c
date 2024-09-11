/*
    10. Check if a Year is a Century Year:
    Write a C program that takes a year as input 
    and checks if it is a century year (a year 
    that is divisible by 100 but not by 400). 
    Output "Century Year" or "Not a Century Year."
*/
#include <stdio.h>

int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    if (year % 100 == 0 && year % 400 != 0)
    {
        printf("Century Year.\n");
    }
    else
    {
        printf("Not a Century Year.\n");
    }
    return 0;
}