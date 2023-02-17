#include <stdio.h>

int main() {
    int base, altezza;

    printf("Calcolo perimetro e area di un rettangolo \n\n");

    printf("base: ");
    scanf("%d", &base);
    printf("altezza: ");
    scanf("%d", &altezza);

    printf("area: %d \n", base*altezza);
    printf("perimetro: %d \n", (base+altezza)*2);


    return 0;
}