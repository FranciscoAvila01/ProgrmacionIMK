#include <stdio.h>

int main() {
    
    char dia = 0;
    int hora = 0;
    int duracion = 0;
    float precio = 0;

    printf("Que dia de la semana fue tu llamada?\n\n");
    printf("L = LUNES\n");
    printf("M = MARTES\n");
    printf("X = MIERCOLES\n");
    printf("J = JUEVES\n");
    printf("V = VIERNES\n");
    printf("S = SABADO\n");
    printf("D = DOMINGO\n");
    scanf("%c" , &dia);
    
    printf("a que hora (en 24 horas) fue tu llamada?\n");
    printf("si es a la 1:30, introduce 1330\n");
    scanf("%d" , &hora);

    printf("cuanto duró tu llamada (en minutos)\n");
    scanf("%d" ,  &duracion);
    
    if((dia == 'L') || (dia == 'l') || (dia == 'M') || (dia == 'm') || (dia == 'X')||(dia == 'x') || (dia == 'J') || (dia == 'j') || (dia == 'V') || (dia == 'v') ){
        
        if((hora > 759) || (hora > 2001)) {
            precio = 0.60*(duracion);
       
        } else if((hora < 800) || (hora > 2000)) {
            precio = 0.25*(duracion);
        }
   
    } else if((dia == 'S') || (dia == 's') || (dia == 'D') || (dia == 'd')) {
    precio = 0.15*(duracion);
  
    } else {
    printf("ingresó un dato no recnocido\n");
    }
    
    printf("gastaste %f pesos\n", precio);

}