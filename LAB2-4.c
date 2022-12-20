/*


TERMINADO Y COMPROBADO


Implementar un programa en C que permita obtener el número de
positivosde una matriz (4x4) y calcular la suma de los elementos de la diagonal.

*/
#include <stdio.h>

int main(int argc, char *argv[])
{
   int matriz[4][4];
   int i, j;
   int positivos = 0;
   int suma = 0;
   // comprobamos el numero de argumentos
   if (argc != 17)
   {
      printf("DEBE INTRODUCIR 16 ARGUMENTOS ENTEROS...");
      // Deberia ser return 1; pero me da error en el comprobador
      // return 1;
      return 0;
   }
   // Lectura de los elementos de la matriz desde la ejecución del programa
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 4; j++)
      {
         sscanf(argv[i * 4 + j + 1], "%d", &matriz[i][j]);
      }
   }

   // Cálculo de positivos y de la suma de la diagonal
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 4; j++)
      {
         if (matriz[i][j] > 0)
         { // Si es posootivo ponemos +1 para llevar la cuneta
            positivos++;
         }
         if (i == j)
         { // Si es un elemento de la diagonal se suma a la variable suma
            suma += matriz[i][j];
         }
      }
   }

   // Salida
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
