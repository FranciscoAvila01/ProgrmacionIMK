#include <stdio.h>

int main()
{
    float base, height, area;

    printf("Enter base of the triangle:\n");
    scanf("%f", &base);
    printf("Enter height of the triangle:\n");
    scanf("%f", &height);

    area = (base * height) / 2;

    printf("Area of the triangle = %.2f sq. units\n", area);

    return 0;
}