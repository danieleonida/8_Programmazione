#include <stdio.h>

int main(void) {
  int base, height;

  printf("Inserisci la base del triangolo: ");
  scanf("%d", &base);
  printf("Inserisci l'altezza del triangolo: ");
  scanf("%d", &height);

  printf("Il valore dell'area del triangolo è: %.1f \n", base * height / 2.0);

  return 0;
}