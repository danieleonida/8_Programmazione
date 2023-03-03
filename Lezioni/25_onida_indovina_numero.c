#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {

    int numWin, numIn;
    bool flag = 0;

    do {
        printf("Il primo utente inserisca un numero(da 1 a 100): ");
        scanf("%d", &numWin);
        if(numWin < 1 || numWin > 100) {
            printf("Valore errato\n");
        }
    } while (numWin < 1 || numWin > 100);

    for (int i = 0; i < 10; i++) {

        printf("Inserisci un numero: ");
        scanf("%d", &numIn);

        if(numIn < numWin) {
            printf("Troppo basso\n");
        } else if(numIn > numWin) {
            printf("Troppo alto\n");
        } else { 
            printf("Esatto\n");
            flag = 1;
            break;
        }   
    }

    if (flag = 0) printf("Hai perso, tentativi terminati");

    return 0;
}
 