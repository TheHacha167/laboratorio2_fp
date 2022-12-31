#include <stdio.h>
#include <stdlib.h>

void cuenta_billetes_monedas(int, int[]);

int main(int argc, char *argv[])
{
    int valor[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int cantidad;
    /*printf ("LAB 2, ejercicio 6\n");
    printf ("Introduce una cantidad de euros (sin centimos): ");
    scanf ("%d", &cantidad);*/
    cantidad = atoi(argv[1]);
    if (argc == 0)
    {

        printf("DEBE INTRODUCIR 1 ARGUMENTO DE TIPO ENTERO...");
        return -1;
    }
    else
    {
        if (cantidad <= 0)
        {
            printf("DEBE INTRODUCIR 1 ARGUMENTO DE TIPO ENTERO...\n");
            // system("pause");
            return -1;
        }
        cuenta_billetes_monedas(cantidad, valor);
        /*system ("pause");*/
    }

    return 0;
}

void cuenta_billetes_monedas(int cantidad, int valor[])
{
    int i, n;
    i = 0;
    while (cantidad > 0)
    {
        n = cantidad / valor[i];
        cantidad = cantidad % valor[i];
        if (n > 0)
        {
            printf(" %d billetes/monedas de %d euros \n", n, valor[i]);
        }
        i++;
    }
}