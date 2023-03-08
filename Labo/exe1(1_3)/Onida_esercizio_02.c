#include <stdio.h>

int main() {
    float lunghezza, larghezza, altezza;

    printf("Calcolo VOLUME di un parallelepipedo\n\n");

    printf("larghezza: ");
    scanf("%d", &larghezza);
    printf("lunghezza: ");
    scanf("%d", &lunghezza);
    printf("altezza: ");
    scanf("%d", &altezza);

    printf("VOLUME: %d \n", larghezza*lunghezza*altezza);

    return 0;
}