#include <stdio.h>

int main(int argc, char const *argv[])
{
    float ticketPrice,plus;

    printf("Inserisci il prezzo del biglietto: ");
    scanf("%f",&ticketPrice);

    plus=ticketPrice*0.15;

    if (plus<=5)
        plus=5;

    printf("Il valore della provigione e' di %.2f euro; il prezzo del biglietto con provigione e' di %.2f euro", plus, ticketPrice+plus);

    return 0;
}
