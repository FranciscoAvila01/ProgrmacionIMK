#include <stdio.h>

int main()
{
    int n = 0;
    int contador = 0;

    printf("ingrese un numero\n");
    scanf("%d",&n);

    while(n>0)
    {
        n = n/10;
        contador++;
    }
    printf("el numero tiene %d digitos\n", contador);
    return (0);
}