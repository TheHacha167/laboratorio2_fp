/*


TERMINADO Y COMPROBADO


Implementar un programa en C que permita obtener el número de
positivosde una matriz (4x4) y calcular la suma de los elementos de la diagonal.

*/
#include <stdio.h>

int main(int argc, char *argv[])
{
   int matriz[4][4];  // Declaración de la matriz de 4x4
   int i, j;          // Variables auxiliares para los ciclos for
   int positivos = 0; // Contador para el número de positivos
   int suma = 0;      // Variable para almacenar la suma de los elementos de la diagonal
   // comprobamos el numero de argumentos
   if (argc != 17)
   {
      printf("DEBE INTRODUCIR 16 ARGUMENTOS ENTEROS...");
      return 0;
   }
   // Lectura de los elementos de la matriz desde los argumentos de la ejecución del programa
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 4; j++)
      {
         sscanf(argv[i * 4 + j + 1], "%d", &matriz[i][j]);
      }
   }

   // Cálculo del número de positivos y de la suma de los elementos de la diagonal
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 4; j++)
      {
         if (matriz[i][j] > 0)
         { // Si el elemento es positivo, se incrementa el contador
            positivos++;
         }
         if (i == j)
         { // Si se trata de un elemento de la diagonal, se suma a la variable suma
            suma += matriz[i][j];
         }
      }
   }

   // Impresión del resultado
   printf("MATRIZ: \n");
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 4; j++)
      {
         printf(" %d ", matriz[i][j]);
      }
      printf("\n");
   }
   printf("POSITIVOS: %d\n", positivos);
   printf("SUMA DIAGONAL: %d\n", suma);

   return 0;
}
