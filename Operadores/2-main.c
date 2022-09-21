#include <stdio.h>
#include "main.h"
/**
 * C program to find perimeter of rectangle
 */

int main()
{
    float length, width, result;

    printf("Enter length of the rectangle:\n");
    scanf("%f", &length);
    printf("Enter width of the rectangle:\n");
    scanf("%f", &width);

    result = area(length, width);

    printf("Area of rectangle = %f sq. units\n", result);

    return 0;
}