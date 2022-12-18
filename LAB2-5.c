/*

TERMINADO Y COMPROBADO


Implementar un programa en C que permita obtener el la matriz
traspuestade una matriz (4x4). Los valores de la matriz se introducen
 como argumentosen la ejecución del programa

*/
#include <stdio.h>

int main(int argc, char *argv[])
{
   int matriz[4][4];
   int i = 0, j = 0;
   if (argc != 17)
   {
      printf("DEBE INTRODUCIR 16 ARGUMENTOS ENTEROS...");
      return 0;
   }

   // Lectura de los elementos 
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 4; j++)
      {
         sscanf(argv[i * 4 + j + 1], "%d", &matriz[i][j]);
      }
   }

   // Salida original
   printf("MATRIZ ENTRADA:\n");
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 4; j++)
      {
         printf(" %d ", matriz[i][j]);
      }
      printf("\n");
   }

   // Cáculo de la traspuesta
   int traspuesta[4][4];
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 4; j++)
      {
         traspuesta[i][j] = matriz[j][i];
      }
   }

   // Salida traspuesta
   printf("MATRIZ TRASPUESTA: \n");
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 4; j++)
      {
         printf(" %d ", traspuesta[i][j]);
      }
      printf("\n");
   }

   return 0;
}
