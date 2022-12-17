/*
En este ejercicio se debe implementar un programa en c que,
dada una cantidad de eurossin céntimos que se ingresa
como argumento en la ejecución del programa, la desgloseen
el menor número posible de billetes y monedas. Por ejemplo, 1747 euros sedesglosan en:
• 3 billetes de 500 euros
• 1 billete de 200 euros
• 2 billetes de 20 euros
• 1 billete de 5 euros
• 1 moneda de 2 euros
En el programa a completar se usará un array
llamado valor, con nueve elementos detipo entero,
para almacenar en orden descendente el valor de los
distintos billetes ymonedas de valor mayor o igual a
1 euro (billetes de 500 euros, de 200 euros, de 100euros,
de 50 euros, de 20 euros, de 10 euros y de 5 euros; monedas
de 2 euros y de 1euro).

*/
#include <stdio.h>
#include <stdlib.h> // Incluir la biblioteca "stdlib.h" para poder utilizar la función atoi

int main(int argc, char *argv[])
{
   int valor[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1}; // Array con los valores de los billetes y monedas
   char *nombre[9] = {"billetes de 500 euros", "billetes de 200 euros", "billetes de 100 euros",
                      "billetes de 50 euros", "billetes de 20 euros", "billetes de 10 euros",
                      "billetes de 5 euros", "monedas de 2 euros", "monedas de 1 euro"}; // Array con los nombres de los billetes y monedas
   int cantidad[9] = {0};                                                                // Array para almacenar la cantidad de cada billete y moneda
   int euros;                                                                            // Variable para almacenar la cantidad de euros
   int i;                                                                                // Variable auxiliar para el ciclo for

   // Lectura de la cantidad de euros desde el argumento de la ejecución del programa
   euros = atoi(argv[1]); // La función atoi convierte una cadena de caracteres a un entero

   // Desglose de la cantidad de euros en el menor número posible de billetes y monedas
   for (i = 0; i < 9; i++)
   {
      cantidad[i] = euros / valor[i]; // División entera para obtener la cantidad de billetes o monedas
      euros %= valor[i];              // Módulo para obtener el resto de la división y continuar con el siguiente billete o moneda
   }

   // Impresión del resultado
   for (i = 0; i < 9; i++)
   {
      if (cantidad[i] > 0)
      { // Si hay algún billete o moneda de este valor, se imprime
         printf("%d %s\n", cantidad[i], nombre[i]);
      }
   }

   return 0;
}
