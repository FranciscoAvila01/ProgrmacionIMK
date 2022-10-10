#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("este programa suma los numeros pares que indiques\n");
    printf("introduzca hasta el numero que quiere llegar: \n");
    scanf("%d", &n);

    for( i =1; i<=n; i+=2)
    {
        sum += i; 
    }

    printf("la suma de los numeros impares es: %d\n", sum);

    return(0);
}