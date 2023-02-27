#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(int argc, char const *argv[]) {
    
    srand(TIME(NULL));
    int numWin, numIn;
    bool flag = 0;

    bunWin = rand()%100+1

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
 