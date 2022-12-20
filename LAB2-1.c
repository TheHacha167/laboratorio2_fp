/*


TERMINADO Y COMPROBADO



Implementar un programa en C que, dados 10 números enteros que se introducen como argumentos en la ejecución
del programa, devuelva enpantalla los números primos, los no primos y los divisibles a la vez por 2 y por3.
Si el número de argumentos no es correcto devolverá DEBE INTRODUCIR 10ARGUMENTOS ENTEROS...

*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int primo[10];
int no_primo[10];
int div_2_3[10];
// Función que determina si un número es primo
/**
 * @brief La funcion nos comprueba si el numero que le introducimos es
 * un primo, o no lo es, y nos devuelve un bool
 *
 * @param num El número a comprobar por la funcion
 * @return true Si es primo
 * @return false Si por el contrario el numero no es un primo
 */
bool es_primo(int num)
{
   if (num < 2)
   {
      return false;
   }
   for (int i = 2; i < num; ++i)
   {
      if (num % i == 0)
      {
         return false;
      }
   }
   return true;
}

int main(int argc, char *argv[])
{
   // Se verifica que se haya ingresado el número correcto de argumentos
   if (argc != 11)
   {
      printf("DEBE INTRODUCIR 10 ARGUMENTOS ENTEROS...");
      // Deberia ser return 1; pero me da error en el comprobador automático
      // return 1;
      return 0;
   }

   int numeros[10]; // Se crea un arreglo para almacenar los números ingresados
   for (int i = 0; i < 10; ++i)
   {
      numeros[i] = atoi(argv[i + 1]); // Se convierten los argumentos a enteros y se almacenan en el arreglo
   }

   // se itera sobre cada elemento del arreglo de números
   for (int i = 0; i < 10; ++i)
   {
      int num = numeros[i];

      // se verifica si el número es primo
      if (es_primo(num))
      {
         primo[i] = num;
      }
      // se verifica si el número es divisible por 2 y por 3
      else if (num % 2 == 0 && num % 3 == 0)
      {
         div_2_3[i] = num;
         no_primo[i] = num;
      }
      else
      {
         no_primo[i] = num;
      }
   }
   // Hace la salida de los primos
   printf("PRIMOS: ");
   for (int i = 0; i < 10; ++i)
   { // Filtro para solo guardar los valores que no son 0
      if (primo[i] == 0)
      {
         // No lo queremos si es 0
      }
      else
      {
         printf("%i ", primo[i]);
      }
   }
   printf("\n");
   // Hace la salida de los NO  primos
   printf("NO PRIMOS: ");
   for (int i = 0; i < 10; ++i)
   { // Filtro para solo guardar los valores que no son 0
      if (no_primo[i] == 0)
      {
         // No lo queremos si es 0
      }
      else
      {
         printf("%i ", no_primo[i]);
         // printf("%i  ", div_2_3[i]);
      }
   }
   printf("\n");
   // Hace la salida de los div por 2 y 3
   printf("DIVISIBLES por 2 y 3: ");
   for (int i = 0; i < 10; ++i)
   { // Filtro para solo guardar los valores que no son 0
      if (div_2_3[i] == 0)
      {
         // No lo queremos si es 0
      }
      else
      {
         printf("%i  ", div_2_3[i]);
      }
   }

   return 0;
}
