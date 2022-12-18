#include <stdio.h>


int main(){
int litrosgas = 0, millas = 0;
float galon = 1, final = 0;
do {
printf("ingrese los litros de gasolina utilizados\n");
scanf("%d",&litrosgas);

printf("ingrese las millas recorridas\n");
scanf("%d",&millas);

galon = litrosgas * .264179;
final = millas / galon;

printf("el auto da %f galones por %d millas recorridas\n", galon, millas);
printf("da un rendimiento de %f galones por milla\n", final);
printf("para terminar el programa ingrese cero\n");
}
while(litrosgas != 0 && millas != 0);
}