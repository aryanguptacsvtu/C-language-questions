#include <stdio.h>

int main()
{
    // Your code goes here
    int side1, side2, side3;

    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3)
    {
        printf("Equilateral");
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        printf("Isosceles");
    }
    else
    {
        printf("Scalene");
    }
    return 0;
}

/*Take the sides of a triangle as user inputs and find if the triangle is equilateral, isosceles, or scalene.

Note:
Equilateral Triangle: If all three sides of the triangle are equal, it is an equilateral triangle.
Isosceles Triangle: If at least two sides of the triangle are equal, it is an isosceles triangle.
Scalene Triangle: If all three sides of the triangle are different, it is a scalene triangle.
*/