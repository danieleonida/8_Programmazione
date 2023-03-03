#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numNumber, number;
    int maxN=0;

    printf("Quanti numeri vuoi inserire: ");
    scanf("%d", &numNumber);

    printf("Inserisci un numero: ");
    scanf("%d", &maxN);

    for (int i = 0; i < numNumber-1; i++)
    {
        printf("Inserisci un numero: ");
        scanf("%d", &number);
        if(number>maxN)
            maxN=number;
    }
    printf("Valore massimo: %d \n", maxN);

    return 0;
}
