#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1,num2,mcd,mcm,aux;

    do {
    printf("Inserisci il primo numero intero positivo: ");
    scanf("%d", &num1);
    } while (num1<1);
    do {
    printf("Inserisci il secondo numero intero positivo: ");
    scanf("%d", &num2);
    } while (num2<1);

    if (num1>num2) {
        aux=num2;
        num2=num1;
        num1=aux;
    }
    
    // // metodo1
    // for (int i = 1; i <= num2; i++) {
    //     if(num1%i == 0 && num2%i == 0) {
    //         mcd = i;
    //     } 
    // }
    //  mcm = (num1*num2)/mcd;

    // metodo2
    for(mcm=num2;mcm%num1!=0;mcm+=num2);
    mcm = (num1*num2)/mcd;

    // // metodo3
    // for (mcd = num1/2;num1 % mcd != 0 || num2 % mcd !=0; mcd--);

    printf("Il minimo comune multiplo è: %.d \n", mcm);
    return 0;
}