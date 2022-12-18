#include <stdio.h>

int  main()
{
    int arreglo3[2][2];
    int arreglo2[2][2];
    int arreglo[2][2];

    printf("ingrese 4 numeros\n");

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            scanf("%d",&arreglo[i][j]);
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ",arreglo[i][j]);
        }
        printf("\n");
    }

    printf("ingrese 4 numeros\n");

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            scanf("%d",&arreglo2[i][j]);
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ",arreglo2[i][j]);
        }
        printf("\n");
    }

    //arreglo3[0][0]=arreglo[0][0]+arreglo2[0][0];
    //arreglo3[1][0]=arreglo[1][0]+arreglo2[1][0];
    //arreglo3[0][1]=arreglo[0][1]+arreglo2[0][1];
    //arreglo3[1][1]=arreglo[1][1]+arreglo2[1][1]; en ciclo for es

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            arreglo3[i][j]=arreglo[i][j]+arreglo2[i][j];
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ",arreglo3[i][j]);
        }
        printf("\n");

    }

}