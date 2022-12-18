#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

     char conway[10][10];

    for(int j=0; j<10; j++)
    {
        for(int i=0; i<10; i++)
        {
            int num = rand() % 11;
            if (num%2 == 0)
            {
                conway[i][j]='*';
            }
            else
            {
                conway[i][j]=' ';
            }

            printf("%c",conway[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    int desconocido=1;
    char conway2[9][9];

    while(1)
    {
        int alivianado=0;
        int fallecido=0;

        for(int j=1; j<9; j++)
        {
            for(int i=1; i<9; i++)
            {
                conway[i][j]=conway2[i][j];
                if(conway[i][j]=='*')
                {
                    if((conway[i-1][j-1]=='*') || (conway[i-1][j]=='*') || (conway[i][j-1]=='*') || (conway[i+1][j-1]=='*') || (conway[i-1][j+1]=='*') || (conway[i][j+1]=='*') || (conway[i+1][j+1]=='*') || (conway[i+1][j]=='*'))
                    {
                        alivianado++;
                    }
                    if(alivianado<2 || alivianado>3)
                    {
                        conway2[i][j]=' ';
                    }
                    if(alivianado<4 || alivianado>1)
                    {
                        conway2[i][j]='*';
                    }
                    alivianado=0;
                }
                else if(conway[i][j]==' ')
                {
                    if((conway[i-1][j-1]=='*') || (conway[i-1][j]=='*') || (conway[i][j-1]=='*') || (conway[i+1][j-1]=='*') || (conway[i-1][j+1]=='*') || (conway[i][j+1]=='*') || (conway[i+1][j+1]=='*') || (conway[i+1][j]=='*'))
                    {
                        alivianado++;
                    }
                }
                
            }
        }
    }

    printf("\n");
       
        printf("Next One\n\n");

        for(int j=1; j<9; j++)
        {
            for(int i=1; i<9; i++)
            {
                conway[i][j]=conway2[i][j];
            }
        }

        desconocido++;

        printf("\n");

}

