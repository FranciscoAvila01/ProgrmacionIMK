#include <stdio.h>

int main()
{
    int i, n = 0, sum = 0;
    printf("este programa suma todos los numero del 1 a n\n");
    printf("introduzca hasta el numero que quieren sumar:\n");
    scanf("%d", &n);

    for(i = 0; i<=n; i++)
    {
        sum += i; 
    }

    printf("la suma de los números son %d \n", sum);

    return(0);
}