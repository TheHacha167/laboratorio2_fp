/*
Implementar un programa en C que permita obtener el la matriz
traspuestade una matriz (4x4). Los valores de la matriz se introducen
 como argumentosen la ejecución del programa

*/
#include <stdio.h>

int main(int argc, char *argv[])
{
   int matriz[4][4]; // Declaración de la matriz de 4x4
   int i, j;         // Variables auxiliares para los ciclos for

   // Lectura de los elementos de la matriz desde los argumentos de la ejecución del programa
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 4; j++)
      {
         sscanf(argv[i * 4 + j + 1], "%d", &matriz[i][j]);
      }
   }

   // Impresión de la matriz original
   printf("Matriz original:\n");
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 4; j++)
      {
         printf("%d ", matriz[i][j]);
      }
      printf("\n");
   }

   // Cálculo de la matriz traspuesta
   int traspuesta[4][4]; // Declaración de la matriz traspuesta
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 4; j++)
      {
         traspuesta[i][j] = matriz[j][i]; // Asignación del elemento correspondiente
      }
   }

   // Impresión de la matriz traspuesta
   printf("Matriz traspuesta:\n");
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 4; j++)
      {
         printf("%d ", traspuesta[i][j]);
      }
      printf("\n");
   }

   return 0;
}
