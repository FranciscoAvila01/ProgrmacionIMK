#include <stdio.h>

int main()
{
    long long n = 0;
    int contador = 0;

    printf("ingrese un numero\n");
    scanf("%lld",&n);       

    do
    {
        printf("numero: %lld\n",n);
        n = n/10;
        contador++;
    } while(n>0);

    printf("el numero tiene %d digitos\n", contador);
    return (0);
}