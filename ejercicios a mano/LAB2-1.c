#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void imprimir_nums(long tabla[], int dim){
    int i;
    for (i=0; i<dim; i++){
        printf("%ld ", tabla[i]);
    }
}

bool esPrimo(int n){

    int aux=n-1;
    bool noEsPrimo = true;
    while ((aux > 1)&&(noEsPrimo)){
        if (n % aux == 0){
            noEsPrimo = false;
        }
        aux--;
    }
    return noEsPrimo;
}

void primos_div23(long vector[]){

    int i, p=0, np=0, d=0;
    long primos[10], noPrimos[10], divisibles23[10];

    for(i=0; i<10; i++){
        if(esPrimo(vector[i])){
            primos[p]=vector[i];
            p++;
        }else{
            noPrimos[np]=vector[i];
            np++;
            if((vector[i] % 2 == 0)&&(vector[i] % 3 == 0)){
                divisibles23[d] = vector[i];
                d++;
            }
        }
    }
    printf("PRIMOS: ");
    imprimir_nums(primos , p);
    printf("\nNO PRIMOS: ");
    imprimir_nums(noPrimos , np);
    printf("\nDIVISIBLES por 2 y 3: ");
    imprimir_nums(divisibles23 , d);

}

int main(int argc, char *argv[]) { /*funci�n principal*/
    long vector[10];
    int i=0;
    char *p;
    if (argc != 11){
        printf("DEBE INTRODUCIR 10 ARGUMENTOS ENTEROS...\n");
        return(0);
    }
    for (i = 1; i <= 10; i++){ /*bucle transformar argumentos en enteros*/
        vector[i-1]=strtol(argv[i], &p, 10);
    }
    primos_div23(vector);
    return(0);
}

