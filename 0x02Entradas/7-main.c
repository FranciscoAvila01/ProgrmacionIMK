#include "main.h"
#include <stdio.h>

int main(void)
{
    int resultado = 0;
    int n1=0;
    int n2=0;

printf ("Ingrese un numero\n");
scanf ("%d", &n1);
printf ("Ingrese un numero\n");
scanf ("%d", &n2);
    
    resultado = mod(n1,n2);
    printf("El módulo %d de %d es: %d\n",n1,n2,resultado);
    return 0;
}