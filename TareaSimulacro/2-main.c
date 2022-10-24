#include <math.h>
#include <stdio.h>

int main(void)
{


    float a;
    float b;
    float c;
    float s;
    float area;
    float peri;
    float semiperi;
    printf("ingrese la longitud de un lado del triangulo:\n");
    scanf("%f",&a);
    
    printf("ingrese la longitud del otro lado del trangulo:\n");
    scanf("%f",&b);

    printf("ingrese la longitud del ultimo lado del trangulo:\n");
    scanf("%f",&c);

    if(a+b>c && a+c>b && b+c>a){
        peri = (a+b+c);
        semiperi = (peri/2);
        printf("El perimetro del triangulo es: %f\n", peri);
        area = (sqrt(semiperi*(semiperi-a)*(semiperi-b)*(semiperi-c)));
        printf("El area del triangulo es: %f\n",area);
    }else{
        printf("Las longitudes no son validas\n");
    }
  

    
    
}