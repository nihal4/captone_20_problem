/*
    13. Find the Type of Quadrilateral:
    Write a C program that takes the lengths of four
    sides and checks if they form a rectangle, square,
    or another quadrilateral. Output the type of quadrilateral
*/

#include <stdio.h>

int main()
{
    int side1, side2, side3, side4;

    printf("Enter the lengths of four sides: ");
    scanf("%d %d %d %d", &side1, &side2, &side3, &side4);

    if (side1 == side3 && side2 == side4 && side1 != side2)
    {
        printf("It's a rectangle.\n");
    }
    else if (side1 == side2 == side3 == side4)
    {
        printf("It's a square.\n");
    }
    else
    {
        printf("It's another quadrilateral.\n");
    }

    return 0;
}