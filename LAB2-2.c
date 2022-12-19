/*
Implementar un programa en C que informe por pantalla si una cadena,introducida
como argumento en la ejecución del programa, es un palíndromo(una cadena es un palíndromo
 si se lee igual de izquierda a derecha que dederecha a izquierda).

*/
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
   // Verificar que se haya proporcionado un argumento
   if (argc != 2)
   {
      printf("DEBE INTRODUCIR 1 ARGUMENTO TIPO CADENA...");
      return 0;
   }

   // Obtener la cadena del argumento
   char *cadena = argv[1];
   int longitud = strlen(cadena);

   // Comprobar si la cadena es un palíndromo
   int es_palindromo = 1;
   for (int i = 0; i < longitud / 2; i++)
   {
      if (cadena[i] != cadena[longitud - i - 1])
      {
         es_palindromo = 0;
         break;
      }
   }

   // Imprimir el resultado
   if (es_palindromo)
   {
      printf("La palabra '%s' es un pal\xa1ndromo\n", cadena);
   }
   else
   {
      printf("La palabra '%s' no es un pal\xa1ndromo\n", cadena);
   }

   return 0;
}
