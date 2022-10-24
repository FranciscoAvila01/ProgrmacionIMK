#include <stdio.h>

int main()
{
    int password = 0;

    printf("INICIO DE PROGRAMA\n");
    
    do
    {
        printf("ingrese un password\n");
        scanf("%d",&password);
    }   while(password!=12345);

    printf("FIN DEL PROGRAMA\n");
    return (0);
}