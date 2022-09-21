#include <stdio.h>
#include "main.h"

int main()
{
    float radius, diameter, circumference, area;
    
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    diameter = diameterC(radius);
    circumference = circumferenceC(radius);
    area = areaC(radius);

    printf("Diameter of circle = %.2f units \n", diameter);
    printf("Circumference of circle = %.2f units \n", circumference);
    printf("Area of circle = %.2f sq. units \n", area);

    return 0;
}