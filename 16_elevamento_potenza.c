#include <stdio.h>

int main(int argc, char const *argv[])
{
    float base, result=1;
    int exp;


    printf("Inserisci la base: ");
    scanf("%f", &base);

    printf("Inserisci l'esponente: ");
    scanf("%d", &exp);

    if(exp>0) {
        for (int i = 0; i < exp; i++)
            result *= base;
    } else {
        for (int i = 0; i > exp; i--)
            result *= base;
        result = 1/result;
    }

    printf("Risultato: %.6f \n", result);
    return 0;
}