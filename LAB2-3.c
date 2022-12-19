/*
Implementar un programa en C para determinar si una
subcadena especificada ocurre en una cadena dada, y si es así,
escribir un asterisco (*) enla primera posición de cada ocurrencia.
La cadena y subcadena se ingresan como argumentos en la ejecución del programa.
La subcadena debe ser demenor longitud que la cadena.

*/
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
   // Verificar que se hayan proporcionado dos argumentos
   if (argc != 3)
   {
      printf("DEBE INTRODUCIR 2 ARGUMENTOS TIPO CADENA...");
      return 0;
   }

   // Obtener la cadena y la subcadena de los argumentos
   char *cadena = argv[1];
   char *subcadena = argv[2];

   // Usar strstr para buscar la subcadena en la cadena
   char *ocurrencia = strstr(cadena, subcadena);
   while (ocurrencia != NULL)
   {
      // Reemplazar el primer carácter de la subcadena con un asterisco (*)
      *ocurrencia = '*';
      // Buscar la siguiente ocurrencia de la subcadena en la cadena
      ocurrencia = strstr(ocurrencia + 1, subcadena);
   }

   // Imprimir la cadena con los asteriscos insertados
   printf("%s\n", cadena);
   return 0;
}
