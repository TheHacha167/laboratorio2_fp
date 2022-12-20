#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  /* Ver si se dan 2 argumentos */
  if (argc != 3) {
    printf("DEBE INTRODUCIR 2 ARGUMENTOS TIPO CADENA...");
    return 0;
  }

  /* Se obtienen las cadenas de los argumentos */
  char *cadena = argv[1];
  char *subcadena = argv[2];

  // Obtiene la longitud de la cadena y la subcadena
  int longitudCadena = strlen(cadena);
  int longitudSubcadena = strlen(subcadena);

  // Verifica que la subcadena sea más corta que la cadena
  if (longitudSubcadena > longitudCadena) {
    printf("La subcadena debe ser más corta que la cadena\n");
    return 0;
  }

  // Recorre la cadena buscando ocurrencias de la subcadena
  int i, j;
  for (i = 0; i < longitudCadena - longitudSubcadena + 1; i++) {
    // Verifica si la subcadena coincide con una porción de la cadena
    int coincide = 1;
    for (j = 0; j < longitudSubcadena; j++) {
      if (cadena[i + j] != subcadena[j]) {
        coincide = 0;
        break;
      }
    }

    // Si la subcadena coincide, escribe un asterisco en la primera posición de la ocurrencia
    if (coincide) {
      cadena[i] = '*';
    }
  }

  /* Imprime la cadena final */
  printf("%s\n", cadena);

  return 0;
}
