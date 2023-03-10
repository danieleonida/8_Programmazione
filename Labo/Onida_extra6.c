#include <stdio.h>
#include <stdlib.h>
#include <time.h>
define

int main(int argc, char const *argv[])
{

    srand(time(NULL));
    int myArray[20];
    int numScambi = 0;

    for (int i = 0; i < 20; i++) {
        myArray[i] = rand()%100+1;
        printf("%d ",myArray[i]);
    }

    printf("\n\nQuante volte vuoi scambiare i valori? ");
    scanf("%d", &numScambi);

    for (int i = 0; i < numScambi; i++) {
        int aux = 0, rIndex1 = rand()%20, rIndex2 = rand()%20;

        while (rIndex1 == rIndex2) rIndex2 = rand()%20;
        
        aux = myArray [rIndex1];
        myArray[rIndex1] = myArray[rIndex2];
        myArray[rIndex2] = aux;
        
        printf("\nHo scambiato la cella di indirizzo %d e valore %d con la cella di indirizzo %d e valore %d",rIndex1,myArray[rIndex1],rIndex2,myArray[rIndex2]);
    }
    return 0;
}
