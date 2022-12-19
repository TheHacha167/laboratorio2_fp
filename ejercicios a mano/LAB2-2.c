/*Implementar un programa en C que informe por pantalla si una cadena, introducida como argumento en la ejecución del programa, es un palíndromo
(una cadena es un palíndromo si se lee igual de izquierda a derecha que de derecha a izquierda).*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("DEBE INTRODUCIR UN VALOR TIPO CADENA...");
        return (0);
    }
    char *str = argv[1];

    int izquierda = 0;
    int derecha = strlen(str) - 1;

    // Comparamos caracteres para ver si son iguales con un while
    while (derecha > izquierda)
    {
        if (str[izquierda++] != str[derecha--])
        {
            printf("La palabra '%s' no es un pal\xa1ndromo\n", str);
            return 0;
        }
    }

    printf("La palabra '%s' es un pal\xa1ndromo\n", str);

    return 0;
}