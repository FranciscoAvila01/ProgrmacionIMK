#include <stdio.h>
#include <math.h>
#include "main.h"

int area(float volumen, float densidad, float costoAnterior)
{

    float area, radiominimo, areaminimo, y;
    float gramos;
    float pi = 3.1416;
    float costo, costom2 = 2.45;

    radiominimo = cbrt((2*volumen)/(4*pi));  

    areaminimo = (2*pi*(pow(radiominimo,2)) + 2*pi*radiominimo*(volumen/(pi*pow(radiominimo,2))));

    y = (volumen/(pi*pow(radiominimo,2)));

    costo = areaminimo * costom2;
    costo = costo/1000;

    gramos = volumen * densidad;
    float nuevo = costoAnterior - costo;
 
    printf("Radio de la tapa: %0.2f cm\n", radiominimo);
    printf("Area total de la lata: %0.2f cm2\n", areaminimo);   
    printf("Costo de fabricacion: $ %0.2f\n", costo);     
    printf("Costo anterior para lata de %0.f ml: $ %0.2f\n", volumen, costoAnterior);
    printf("Ahorro: $ %0.2f\n", nuevo);
    printf("%0.f ml en gramos = %0.2f gr\n",volumen,gramos);
}