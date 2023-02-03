#include <stdio.h>

int main(int argc, char const *argv[])
{
    double num1, num2, num3, aux;

    printf("Inserisci il primo numero: ");
    scanf("%f",&num1);
    printf("Inserisci il secondo numero: ");
    scanf("%f",&num2);
    printf("Inserisci il terzo numero: ");
    scanf("%f",&num3);

    if (num1>num2) {
        aux=num1;
        num1=num2;
        num2=aux;    
    }    
    if (num2>num3) {
        aux=num2;
        num2=num3;
        num3=aux;    
    }    
    if (num1>num2) {
        aux=num1;
        num1=num2;
        num2=aux;    
    }    

    printf("%f-%f-%f", num1, num2, num3);
    
    return 0;
}