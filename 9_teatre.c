#include <stdio.h>

int main(int argc, char const *argv[])
{

    int age1,age2,age3,ticketPrice,totalPrice;

    printf("Inserisci l'eta' del primo partecipante: ");
    scanf("%d",&age1);
    printf("Inserisci l'eta' del secondo partecipante: ");
    scanf("%d",&age2);
    printf("Inserisci l'eta' del terzo partecipante: ");
    scanf("%d",&age3);

    if (age1<12) {
        ticketPrice = 10;
    } else if (age1>70){
        ticketPrice = 10;
    } else if (age1<18) {
        ticketPrice = 20;
    } else {
        ticketPrice = 35;
    }
    totalPrice+=ticketPrice;

    if (age2<12) {
        ticketPrice = 10;
    } else if (age2>70){
        ticketPrice = 10;
    } else if (age2<18) {
        ticketPrice = 20;
    } else {
        ticketPrice = 35;
    }
    totalPrice+=ticketPrice;

    if (age3<12) {
        ticketPrice = 10;
    } else if (age3>70){
        ticketPrice = 10;
    } else if (age3<18) {
        ticketPrice = 20;
    } else {
        ticketPrice = 35;
    }
    totalPrice+=ticketPrice;

    printf("Il prezzo totale e' di %d euro \n", totalPrice);
    return 0;
}
