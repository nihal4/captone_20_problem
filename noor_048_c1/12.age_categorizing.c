/*
    12. Categorize Age Group:
    Write a C program that takes a person's age
    as input and categorizes them into one of
    the following groups:
    - 0-12: Child
    - 13-19: Teenager
    - 20-64: Adult
    - 65+: Senior
    Output the corresponding age group.
*/

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 0 && age <= 12)
    {
        printf("Child\n");
    }
    else if (age >= 13 && age <= 19)
    {
        printf("Teenager\n");
    }
    else if (age >= 20 && age <= 64)
    {
        printf("Adult\n");
    }
    else if (age >= 65)
    {
        printf("Senior\n");
    }
    else
    {
        printf("Invalid age\n");
    }

    return 0;
}
