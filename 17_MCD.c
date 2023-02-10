#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1,num2,mcd,aux;

    do {
    printf("Inserisci due numeri interi positivi: ");
    scanf("%d", &num1);
    } while (num1<1);
    do {
    printf("Inserisci due numeri interi positivi: ");
    scanf("%d", &num2);
    } while (num2<1);

    if (num1>num2) {
        aux=num2;
        num2=num1;
        num1=aux;
    }
    
    // for (int i = 1; i <= num2; i++) {
    //     if(num1%i == 0 && num2%i == 0) {
    //         mcd = i;
    //     }
    // }

    for (mcd = num1/2;num1 % mcd != 0 || num2 % mcd !=0; mcd--);

    printf("Il massimo comune divisore è: %.d \n", mcd);
    return 0;
}