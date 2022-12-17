/*
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
// función que determina si un número es primo
bool es_primo(int num)
{
   if (num < 2)
   {
      return false;
   }
   for (int i = 2; i < num; i++)
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
   if (argc != 11)
   { // se verifica que se haya ingresado el número correcto de argumentos
      printf("DEBE INTRODUCIR 10 ARGUMENTOS ENTEROS...");
      return 1;
   }

   int numeros[10]; // se crea un arreglo para almacenar los números ingresados
   for (int i = 0; i < 10; i++)
   {
      numeros[i] = atoi(argv[i + 1]); // se convierten los argumentos a enteros y se almacenan en el arreglo
   }

   // se itera sobre cada elemento del arreglo de números
   for (int i = 0; i < 10; i++)
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
   printf("PRIMOS: ");
   for (int i = 0; i < 10; i++)
   {
      if (primo[i] == 0)
      {
         /* code */
      }
      else
      {
         printf("%i ", primo[i]);
      }
   }
   printf("\n");
   printf("NO PRIMOS: ");
   for (int i = 0; i < 10; i++)
   {
      if (no_primo[i] == 0)
      {
         /* code */
      }
      else
      {
         printf("%i ", no_primo[i]);
         // printf("%i  ", div_2_3[i]);
      }
   }
   printf("\n");
   printf("DIVISIBLES por 2 y 3: ");
   for (int i = 0; i < 10; i++)
   {
      if (div_2_3[i] == 0)
      {
         /* code */
      }
      else
      {
         printf("%i  ", div_2_3[i]);
      }
   }

   return 0;
}
