#include <stdio.h>
#include "main.h"

int main()
{
    float cm, meter, km;

    printf("Enter length in centimeter:\n");
    scanf("%f", &cm);

    meter = CMtoM(cm);
    km    = CMtoKM(cm);

    printf("Length in Meter = %.2f m \n", meter);
    printf("Length in Kilometer = %.2f km\n", km);

    return 0;
}