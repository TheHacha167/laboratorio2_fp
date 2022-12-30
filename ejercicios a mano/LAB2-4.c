#include <stdio.h>
#include <stdlib.h>
#define MAX 16
#define FILCOL 4

int contar(int matriz[][FILCOL]){
    int cont=0, i, j;

    for(i=0; i<FILCOL; i++){
        for (j=0; j<FILCOL; j++){
            if(matriz[i][j] >= 1){
                cont++;
            }
        }
    }

    return cont;
}

int diagonal(int matriz[][FILCOL]){
    int suma = 0, i, j;
     for(i=0; i<FILCOL; i++){
        for (j=0; j<FILCOL; j++){
            if(i == j){
                suma = suma + matriz[i][j];
            }
        }
    }
    return suma;
}

int main(int argc, char *argv[])
{
    int matriz[4][4], i, j, cont, suma, aux=1;

    if(argc != MAX+1){
        printf("DEBE INTRODUCIR 16 ARGUMENTOS ENTEROS...");

    }else{

        printf("MATRIZ:\n");
        for (i=0; i<FILCOL;i++){
            for(j=0; j<FILCOL; j++){

                matriz[i][j] = atoi(argv[aux]);
                aux++;
                printf(" %d ", matriz[i][j]);
            }
            printf("\n");
        }

        cont = contar(matriz);
        printf("POSITIVOS: %d\n", cont);
        suma = diagonal(matriz);
        printf("SUMA DIAGONAL: %d", suma);

    }

    return 0;
}
