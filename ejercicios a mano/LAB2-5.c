/*Implementar un programa en C que permita obtener el la matriz traspuesta
de una matriz (4x4). Los valores de la matriz se introducen como argumentos
en la ejecución del programa.*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 16
#define FILCOL 4

int main(int argc, char *argv[])
{
    int matriz[4][4], i, j, aux;

    aux = 1;

    if (argc != MAX + 1)
    {
        printf("DEBE INTRODUCIR 16 ARGUMENTOS ENTEROS...");
    }
    else
    {

        printf("MATRIZ ENTRADA:\n");
        for (i = 0; i < FILCOL; i++)
        {
            for (j = 0; j < FILCOL; j++)
            {
                matriz[i][j] = atoi(argv[aux]);
                aux++;
                if (i == FILCOL - 1 && j == FILCOL - 1)
                {
                    printf(" %d", matriz[i][j]);
                }
                else
                {

                    printf(" %d ", matriz[i][j]);
                    if (j == FILCOL - 1)
                    {
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }

        printf("MATRIZ TRASPUESTA: \n");
        for (i = 0; i < FILCOL; i++)
        {
            for (j = 0; j < FILCOL; j++)
            {
                printf(" %d ", matriz[j][i]);
            }
            printf("\n");
        }
    }

    return 0;
}